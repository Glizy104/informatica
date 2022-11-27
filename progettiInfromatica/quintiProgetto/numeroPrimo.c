#include <stdio.h>

int main(){
    int num; 
    int primo = 0;
    printf("Numero che vuoi controllare : ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 1;
        }
        
    }
    if (primo == 0)
        {
            printf("e un numero primo");
        }else{
            printf("Non e un numero primo");
        }
    
}
