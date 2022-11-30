#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

int i;
        FILE * fp;
        char testo[50];
        char str[150];
       
       
       
        fp = fopen("testo.txt", "wt"); // "w" defines "writing mode"
       
        printf("Inserisci parole : ");
       
        if(fp == NULL){
        printf("Errore");
        exit(1);
}
       
        do{

        scanf("%s", str);
        fprintf(fp, "%s \n ", str);
       
    }while(strcmp(str, "FINE") != 0 );

       
        fclose(fp);
        return 0;
}