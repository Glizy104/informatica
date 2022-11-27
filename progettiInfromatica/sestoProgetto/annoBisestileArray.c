#include <stdio.h>
#define DIM 201

int annoBisestile(int anno){
    if (anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0 )){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a[DIM], b[DIM];
    int anno = 1900;
    int i = 0,j = 0;
    int flag = 0;

    for (i = 0, j = 0; i <= DIM; i++, j++){
        a[i] = anno++;
        if(annoBisestile(anno) == 1){
            flag++;
            b[j] = anno;
            printf("%d \n", anno);
        }else{
            j--;
        }   
    }

    printf("ci sono : %d", flag);

    return 0;    
}
