#include <stdio.h>


main(){

    //nell'esercitazione precedente abbiamo fatto gli if, ora manca da fare il "do while"

    //ESERCIZIO SPIEGATO
    /*
    creare un programma dove chiesta una data all'utente, il programma ti stampa (in OUTPUT) il giorno sucessivo
    esempio:
    se l'utente mette il 28 2 2016 deve stampare 1 3 2016
    se l'utente mette il 3 4 2018 deve stampare 4 4 2018
    se l'utente mette il 31 12 2018 deve stampare 1 1 2019
    */

    //visto che la macchina è stupida dobbiamo mettere in dubbio tutto tipo 
    /* 
    se siamo a febbraio, siamo ad un anno bisestile?
    siamo all'ultimo del mese?
    siamo all'ultimo dell'anno?

    *bisogna chiedersi tante cose*

    */

    //intanto creiamo le variabili
    int giorno, mese, anno;
    int flag = 0; //la variabile flag la uso per un errora che ti spiegherò successivamente 

    //chiediamo all'utente la data da mettere 
    printf("Giorno corrente (giorno / mese / anno ): ");
    scanf("%d %d %d", &giorno, &mese, &anno);

    //se l'utente mette un mese compreso tra 1 e 12 entro nell'if
    if (mese <= 12 && mese >= 1){

        //ora dobbiamo fare i nostri controlli
        /*
        primo controllo da fare sarà se il mese è febbraio quindi if(mese == 2) allora controllo se 
        è bisestile
        */

        //febbraio
        if (mese == 2){
            flag = 1;
            //controllo se è bisestile, se lo è entro dentro all'if
            if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){

                //allora è un bisestile
                //ora controllo che se il giorno è 29, riporto il giorno a 1 e mese a 3 perchè ovviamente andando avanti di un giorno passo al mese dopo
                if (giorno == 29){
                    giorno = 1;
                    mese++;
                }else{// mentre se invece non siamo all'ultimo del mese allora faccio semplicemente giorno + 1 (lo incremento e basta)
                    giorno++;
                }
            }else{//mentre se invece non siamo in un anno bisestile entro qui dentro
                if (giorno == 28){ //se il giorno è 28, visto che non siamo in un bisestile non faccio giorno + 1 ma visto che cambio mese faccio sempre giorno = 0 e mese++
                    giorno = 1;
                    mese++;
                }else{//se invece è un'altro girno diverso da 28 faccio semplicemente giorno + 1 
                    giorno++;
                }
            }
        }
        /*
        sapendo che gli unici mesi che hanno come giorno finale il 30 sono APRILE, GIUGNO, SETTEMRE e NOVEMBRE
        faccio il controllo su di essi ora
        */

        //giorni da 30 giorni
        //quindi se l'utente inserisce come mese APRILE, LUGLIO, SETTEMRE O NOVEMBRE entro dentro all'if
        if (mese == 4 || mese == 6 || mese == 9 || mese == 11){
            if (giorno >= 1 && giorno <= 30){//se il giorno è compreso fra 1 e 30 entro dentro all'if
                if (giorno == 30){//se il giorno che l'utente ha inserito è il 30 (quindi l'ultimo del mese) allora metto giorno a 1 e mese++
                    giorno = 1;
                    mese++;
                }else{//se invece il giorno inserito dall'utente è minore di 30 faccio un semplice giorno ++
                    giorno++;
                }
            }
        /*
        ora devo controllare se l'utente mette gli altri mesi tranno il 2 quindi se
        l'utente mette GENNAIO, FEBBRAIO, MARZO, MAGGIO, GIUNGO, AGOSTO, OTTOBRE e DICEMBRE e se l'utente non ha messo FEBBRAIO quindi else if (mese != 2)
        allora entro dentro all'if
        */
        }else if ((mese != 2 && flag != 1)){ /*&& (mese == 1 || mese == 2 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12)*/
            if (giorno == 31){//se il giorno messo dall'utente è l'ultimo del mese allora metto giorno a 1 e incremento il mese con mese++
                giorno = 1;
                mese++;
                if (mese > 12){//e se il mese è gennaio e l'utente ha messe 31 12 come giorno e mese allora giorno rimane a 1 da prima, però cambiamo il mese e lo mettiamo a 1 e anche l'anno che lo incrementiamo facendo anno ++
                    mese = 1;
                    anno++;
                }
                }else{//se invece l'utente non ha messe come giorno il 31 faccio un semplice incremento del giorno con giorno++
                giorno++;
            }
            }
        }//stampo il giorno successivo
        printf("il giorno successivo è : %d / %d / %d", giorno, mese, anno);
    
}