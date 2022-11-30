#include <stdio.h>

int main(){

    int i, j, k=8;
    int myArray[] = {1,2,3,4,5,6,7,8};
    int somma = 9;

    for(i = 0; i < k; i++){
        for(j = i + 1; j < k; j++){
            if (myArray[i] + myArray[j] == somma){
                printf("\nIl numero %d si ottiene con la somma di %d e %d\n", somma, myArray[i], myArray[j]);
            }
            
        }
    }
    return 0;
}