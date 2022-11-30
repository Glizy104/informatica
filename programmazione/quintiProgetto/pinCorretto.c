#include <stdio.h>

int main()
{
    int pin = 44122;
    int tentativi = 0;
    int password;
    int corretto = 0;

    printf("Inserisci la password : ");

    do
    {
        scanf("%d", &password);
        if (password == pin)
        {
            printf("Corretto!");
            corretto = 1;
        }else{
            tentativi++;
        }

    } while (tentativi < 3 && corretto != 1);
    if (corretto == 0)
    {
        printf("Pin non corretto");
    }
    

    return 0;
}