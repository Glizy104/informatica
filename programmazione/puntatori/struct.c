#include <stdio.h>

/*
una struct è una collezione finita di variabili, dette campi, non necessariamente dello stesso tip
ognuna identificata da un nome

strcut [<etichetta>]
{
    { <definizione-di-variabile> }
}<nomeStruttura>;

esempio 

struct persona
{   
    char nome[20];
    int eta;
    float stipendio;

}pers;

esempio

struct punto
{ int x, y;
}p1, p2;

posso scriverla come p1.y o come p2.y oppure p1.x o anche p2.x

struct data
{
    int giorno, mese, anno;

}d;

---esempio concreto---
struct perosna
{
    char nome[20];
    int eta;
    float stipendio;

}direttore, impiegato;

impiegato.eta = 30;
if(direttore.stipendio < impiegato.stipendio)
    direttore.stipendio = 2 * impiegato.stipendio;

*/

//ESERCIZIO COMPLEANNO

struct data
{
    int giorno;
    int mese;
    int anno;

}oggi;


struct
{
    char nome[20];
    struct data data_nascita;

}persona;


int main(void) {

    printf("Inserisci la data di oggi : ");
    scanf("%d %d %d", &oggi.giorno, &oggi.mese, &oggi.anno);

    printf("Inserisci il nome e la data del tuo compleanno : ");
    scanf("%s %d %d %d", persona.nome, &persona.data_nascita.giorno , &persona.data_nascita.mese, &persona.data_nascita.anno);




  return 0;
}
