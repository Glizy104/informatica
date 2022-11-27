#include <stdio.h>
#define DIM 10

main()
{
    char s1[DIM], s2;
    int flag = 0;

    printf("Scrivi una parola : ");
    scanf("%s", s1);

    printf("\ndammi una lettera che vuoi cercare nella parola : ");
    do{
        scanf("%c", &s2);
    }while(s2 == '\n');

    for(int i = 0; s1[i] != '\0'; i++){
        
        if(s1[i] == s2){
            flag++;
        }

    }
    if(flag > 0){
    printf("La lettera %c e' presente nella parola", s2);
    }else{
        printf("La lettera %c non e' presente nella parola", s2);
    }



    return 0;
}