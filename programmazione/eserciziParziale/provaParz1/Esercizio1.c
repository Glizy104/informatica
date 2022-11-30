#include <stdio.h>

float radice2(float y){
    float a, b, m;
    float d;

    if(y > 1){
        a = 1;
        b = y;
    }else{
        a = y;
        b = 1;
    }

    do{
        m = (a + b) / 2;

    if ( (m * m) < y)
    {
        a = m;
    }else{
        b = m;
    }

    d = (m*m) - y;

    if (d < 0){
        d = -d;
    }

    }while(d > 1e-5);

    return m;
}


int main(){
    int dim = 10;
    float numeriReali[dim];
    float num;
    float y;

    int dl =0;

    for (int i = 1 ,j = 0; i <= dim; i++ , j++)
    {
        printf("dammi il %d numero : ", i);
        scanf("%f", &y);

        if (y >= 0)
        {
            numeriReali[j] = radice2(y);
            dl++;
        }else{
            j--;
        }
        
        //printf("%f \n", numeriReali[i]);

    }

    for (int i = 0; i < dl; i++)
    {
        
        printf("%f \n", numeriReali[i]);
    }
    
    

    return 0;
}