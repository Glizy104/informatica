#include <stdio.h>

int MCD(int a, int b){
    int t, m, i;
    if(a > b){
        t = b;
        b = a;
        a = t;
    }
        m = 1;
        i = 2;
        while (i <= a)
        {
            if (a % i == 0){
                if(b % i == 0){
                    m = i;
                }
            }
            i++;
        }
    return m;
}

//definire un array di interi da 10
//richiedere all'utente un numeri M
//per i = 1....10 assegnare all'elemto i eseimo dell'array il massimo comun divisiore di M e i
// per i = 1..10 stampi su output una riga di formato MCD(M, i) = n dove n p il i esimo elemento dell'array

int main() {

    int dim = 10;
    int a[dim];
    int m;
    int i, j;

    printf("dammi un numero M : ");
    scanf("%d", &m);

    for (i = 1; i <= dim; i++)
    {
        printf("MCD(%d, %d) = %d \n", m, i, MCD(m, i));
    }
    


return 0;
}
