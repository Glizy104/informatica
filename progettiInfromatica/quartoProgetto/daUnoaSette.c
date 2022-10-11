#include <stdio.h>

int main(){

    int giornodellaSettimana = 0;

    printf("Scrivi un numero che equivalga ad un giorno della settimana : ");
    scanf("%d", &giornodellaSettimana);

    if((giornodellaSettimana >= 1) && (giornodellaSettimana <= 7)){
        if(giornodellaSettimana == 1) 
            printf("Lunedi");
        if(giornodellaSettimana == 2) 
            printf("Martedi");
        if(giornodellaSettimana == 3) 
            printf("Mercoledi");
        if(giornodellaSettimana == 4) 
            printf("Giovedi");
        if(giornodellaSettimana == 5) 
            printf("Venerdi");
        if(giornodellaSettimana == 6) 
            printf("Sabato");
        if(giornodellaSettimana == 7) 
            printf("Domenica");  
    }

    return 0;
}