#include <stdio.h>

int main()
{
    int G, M, A;
    int JD = 0;
    printf("giorno di oggi: ");
    scanf("%d", &G);
    printf("mese di oggi: ");
    scanf("%d", &M);
    printf("anno di oggi: ");
    scanf("%d", &A);

    //giorno giuliano di oggi 29.09.2022
    int n0;
    //n0 = (M - 14) / 12
    n0 = (M - 14) / 12;
    int n1;
    //n1 = 1461 (A + 4800 + n0) / 4
    n1 = (1461 * (A + 4800 + n0)) / 4;
    int n2;
    //n2 = (367(M - 2 - 12*n0)) / 12;
    n2 = (367 * (M - 2 - 12 * n0)) / 12;
    int n3;
    //n3 = (3(A + 4900 + n0)) / 400;
    n3 = (3 * (A + 4900 + n0)) / 400;

    printf("N0 = %d\n", n0);
    printf("N1 = %d\n", n1);
    printf("N2 = %d\n", n2);
    printf("N3 = %d\n", n3);

    JD = n1 + n2 + n3 + G - 32075;
    printf("%d\n", JD);

    return 0;
}