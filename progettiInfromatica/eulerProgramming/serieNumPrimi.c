#include <stdio.h>

int main()
{
    /* dato un numero trovare i primi multipli primi */

    int num;
    int fattore = 0;
    int temp = 1;

    printf("di quale numero vorresti vedere i suoi multipli primi : ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        /*if(num % i == 0){
            if (fattore % num == 0 )
            {
                printf("\n i fattori sono : %d", i);
                temp = i * temp;
                if (temp == num)
                {
                 
                }
                
            }
            
        }*/
        for (int j = 2; j <= i; j++)
        {
            if (num % i == 0)
            {
                if (fattore % num == 0)
                {
                    printf("\n i fattori sono : %d", j);
                    /*temp = i * temp;
                if (temp == num)
                {
                 
                }*/
                }
            }
        }
    }

    return 0;
}