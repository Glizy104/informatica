#include <stdio.h>x

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
            printf("Corretto!")
            corretto = 1;
        }else{
            tentativi++;
        }

    } while (tentativi < 3 && corretto != 0);

    return 0;
}