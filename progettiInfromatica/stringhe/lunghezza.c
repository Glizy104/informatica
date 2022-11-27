#include <stdio.h>
#define DIM 20

int main()
{
    char s1[DIM];
    int i;
    int count = 0;
    printf("Scrivimi una parola : ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        count++;
    }

    printf("La lunghezza e' di : %d \n", count);

    return 0;
}