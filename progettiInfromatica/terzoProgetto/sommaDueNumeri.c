#include <stdio.h>
    int main(){
        
        int a, b;
        int ris = 0;

        printf("Numero 1 : ");
        scanf("%d", &a);

        printf("Numero 2 : ");
        scanf("%d", &b);
        
        ris = a + b;

        printf("Numero 3 : ");
        scanf("%d", &a);

        ris = a + ris;

        printf("risultato : %d ", ris);
    return 0;
    }


16

    