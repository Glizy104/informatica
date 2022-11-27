#include <stdio.h>

int main(void) {

/*
    int a = 0; // int sta per intero quindi numeri senza la virgola es. 1, 2, 3, 4 etcc..
    int c = 0;
    int risultato = 0;
    float b = 0;//float sta per numeri con la virgola es. 1.0, 2.0, 3.0 etcc
*/

//------PRIMO CAPITOLO
   // printf("hello world");


//------SECONOD CAPITOLO
//stampiamo a
//printf("stampo a : %d \n altro ", a);  //per andare a capo faccio \n

//------TERZO CAPITOLO

//somma fra numeri interi
/*
a = 5;
c = 3;
risultato = a + c;
printf("stampa : %d \n", risultato);
*/

//------QUARTO
//divisione fra variabili

/*

DIVISIONE /
MOLTIPLICAZIONE * 
ADDIZIONE + 
SOTTRAZIONE -

*/

/*
float num1 = 3;
float num2 = 2;
float divisone;

divisone = num1 / num2;

printf("%f \n", divisone); // per stampar eintero faccio %d per stampare float faccio %f
*/


//-----SCANF

/*
int a;

printf("Quanto vale a ? : ");
scanf("%d", &a);

printf("\n stampo a : %d", a);

*/


//-----CONDIZIONALI
/*
int a = 5;
int b = 2;
*/

/*
IF -> se 
FOR -> faccio fino a quanod...
WHILE -> faccio fino a quando...

*/

/*
if(a == 5){//neli if sempre il doppio uguale " == ""
    printf(" a va bene");
}else{
    printf("a non va bene");
}
*/

//PROGRAMMA ESERCIZIO

// chiediamo all'utente la somma a e b e la stampiamo e vediamo se è pari

/*int a = 0;
int b = 0;
int risultato = 0;

printf("Dammi i valori di a e b :");
scanf("%d %d", &a, &b);

risultato =  a + b ;

printf("%d", risultato);

if(risultato % 2 == 0){

    printf("\nil risultato e' pari");

}else{

    printf("\nIl risultato e' dispari");
}
*/


//-------CONDIZIONALI WHILE e DO WHILE


//while

/*int a = 0;

while (a < 5)
{
    a = a + 1;
}

printf("%d \n", a);*/




//do while

/*int a = 0;

do
{
    
    printf("%d", a); 
    a++;

} while (a < 5);

*/


//FOR
/*
int i = 0;

for(i = 0; i = 5; i++){

    printf("%d\n", i);
}*/

//DIVERSI TIPI DI CONDIZIONI
/*int a = 5;
int b = 3;

if(a == 5 && b == 2){ //se a e b sono veri entro

    printf("ok");
else{
    printf("no ok");
}

if(a == 5 && b == 2){ //se a o b sono veri esntro, mi basti che uno dei due sia vero

    printf("ok");
else{
    printf("no ok");
}
*/

  return 0;
}