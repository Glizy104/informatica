#include <stdio.h>

int main(){

    int i, k=9, numeriSommati = 0;
    int myArray[] = {1,2,3,4,5,6,7,8};
    int somma = 9;


    for(i = 0; i < myArray[k]; i++){
        numeriSommati += myArray[i];
        if(numeriSommati == somma){
            printf("I numeri che fnano 9 sono : %d", myArray[i]);
        }
    }
    return 0;
}