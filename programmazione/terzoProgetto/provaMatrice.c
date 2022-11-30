#include <stdio.h>
#include <stdlib.h>

int matrice(int, int);

int main(){
    int riga = 0, col = 0;
        printf("Inserire il numero delle righe : ");
        scanf("%d", &riga);
        printf("Inserire il numero delle colonne : ");
        scanf("%d", &col);  

        matrice(riga, col);
}

int matrice(int r, int c ){
    int random = 0;

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            random = rand()%10;
            printf(" | %d | ", random);
        }
       printf("\n");
    }
}
