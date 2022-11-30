#include <stdio.h>

int main()
{
    int j = 0;
    int num = 0;

    printf("Vuoi arrivare fino a ? : ");
    scanf("%d", &j);

    for(num = 1; num <= j; num++)
    {
         if((num % 3 == 0) && (num % 5 != 0)){
             printf(" bin ");
         }
         else if((num % 3 != 0) && (num % 5 == 0)){
             printf(" bum ");
         }
         else if((num % 3 == 0) && (num % 5 == 0)){
             printf(" binbum ");
         }else{
             printf(" %d ", num);
         }
    }
}
