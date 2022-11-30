#include <stdio.h>

int massimo(int a, int b);
int massimo3(int a, int b, int c);

int massimo(int a, int b){

    if(a > b){
        return a;
    }else{
        return b;
    }
}

int massimo3(int a, int b, int c){
    int numMassimo = massimo(a, b);

    return massimo(numMassimo, c);

}



int main()
{
    int a, b, c,   numMassimo;

    printf("Dammi due numeri e ti dico il massimo : ");
    scanf("%d %d", &a , &b);

    numMassimo = massimo3(a, b, c);
    printf("il massimo è : %d", numMassimo );

return 0;
}
