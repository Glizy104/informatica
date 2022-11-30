#include <stdio.h>

int main(){

    int num = 0;

    printf("Quanto la vuoi grande la piramide ? ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        printf(" * ");
    }
    


return 0;
}
