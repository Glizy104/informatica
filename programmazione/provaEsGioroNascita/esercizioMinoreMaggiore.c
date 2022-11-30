#include <stdio.h>  /* DA METTERE SEMPRE - libreria ovvero un file esterno che viene preso in automatico dal programma
per premetterti di usare certi comandi */

main(){ //contenitore che serve a contenere il tuo programma

    /*
    //variabile è un'oggetto che noi utilizziamo per il nostro programma cambiandogli valori
    int a = 0;// int vale per INTERO ovvero semplici numeri senza virgola come 1, 0, -1, 5 etcc..
    //inizializzare significa metterlo uguale a 0
    //int serve per DICHIARARAE/CREARE una variabile

    int b = 0; //creo b e lo metto a 0 quinid lo inizializzo
    int risutlato = 0; //creo risultato e lo metto a 0 quinid lo inizializzo

    printf("Che valore vuoi mettere ad A : "); //stampo a video " Che valore vuoi mettere ad A"
    scanf("%d", &a); //chiedo all'utente che valore vuole dare ad a

    printf("\nChe valore vuoi mettere ad B : "); //stampo a video " Che valore vuoi mettere ad A"
    scanf("%d", &b); //chiedo all'utente che valore vuole dare ad b

    risutlato = a + b; //risultato avrà valore di a + b

    printf("\nla somma di a + b  e' = %d", risutlato); //stampo a video risultato

    */

    //ESERCIZIO IN CLASSE
    //calcolare area e perimetro di un rettangolo chiedendo all'utente base e altezza
/*
    int base = 0;
    int altezza = 0;
    int area = 0;
    int perimetro = 0;

    printf("valore della base : ");
    scanf("%d", &base);

    printf("\nvalore dell'altezza : ");
    scanf("%d", &altezza);

    area = base * altezza;
    perimetro = (base + altezza ) *2;

    printf("l' area e' di : %d", area);
    printf("\nl' periemtro e' di : %d", perimetro);
*/

    //ESERCIZIO 2 IN CLASSE DIFFICILE
    //int a = 5;
    
    //a += 1;
    // a = a + 1 +(1)  tradotto


    //a += a = 4;  (mi raccomando, ricordarsi di fare le operazioni come = + - * / sempre da destra verso sinistra se non ci sono parentesi)
    //a = a + (a = 4);  tradotto

    //a++;
    // a = a + 1;  tradotto

    //a += a++;
    //a = a + (a + 1)  tradotto

    //a = a + a++;
    //a = a + (a +1)  tradotto


    //printf("%d", a);



    //GLI IF
    //tradotto in italiano sarebbe SE 
    /*int a = 1;
    int b = 0;
    
    if((a > b) || (a == 5)){
        printf("OK");
    }else{
        printf("NO OK");

    }*/
    

   //richiedere all'utente che metta 3 numeri interi diversi e stampi il maggiore dei 3
    int a = 0, b = 0, c = 0;

    printf("Dammi 3 numeri : ");
    scanf("%d %d %d", &a, &b, &c);  //chiedo in una stessa riga i 3 valori di a, b, c
        if(a > b){ //se A è > di B allora entro dentro all'if se no passo dopo
            if(a > c){ //entrato dentro all'if controllo se a è > c e se lo è allora significa che A è il più grande fra tutti i numeri
            printf(" A piu GRNADE");
        }else{  //se no significa che invece lo è C
            printf("C piu GRNADE");
        }
        if (b > c){ //se b è > c significa che B è il più grande fra tutti
            printf("B piu GRNADE");
        }else{  //se non lo è allora C lo é
            printf("C piu GRNADE");
    }

    
}