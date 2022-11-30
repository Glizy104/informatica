#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int i;
    FILE *fp;
    char testo[50];
    char str[150];
    char nomeFile[100];
    char c;

    printf("quale file vuoi cercare e lggerne il contenuto : ");
    scanf("%s", nomeFile);

    fp = fopen(nomeFile, "rt"); // "w" defines "writing mode"

    if (fp == NULL)
    {
        printf("Errore");
        exit(1);
    }


        while(fscanf(fp,"%c", &c) == 1)
        printf("%c", c);


    fclose(fp);
    return 0;
}