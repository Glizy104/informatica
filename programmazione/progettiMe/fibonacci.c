#include <stdio.h>

int main(){
    int a = 1 , b = 2, ris = 0;
    int i; 
    int numeriOut;

    printf("Quanti numeri di fibonacci vorresti vedere? ");
    scanf("%d", &numeriOut);

    printf("La sequenza è : %d, %d, ", a, b);
    ris = a + b;

    for (i = 3; i <= numeriOut; i++){
       
       printf("%d, ", ris);

       a = b;
       b = ris;
       ris = a + b;
    }

return 0;
}