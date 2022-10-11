#include <stdio.h>

int main()
{

    int giorno, mese, anno;

    printf("Giorno corrente (giorno / mese / anno ): ");
    scanf("%d %d %d", &giorno, &mese, &anno);

    if (mese <= 12 && mese >= 1){
        if (giorno >= 1 && giorno <= 12){
        
        //febbraio
        if (mese == 2){
            if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
                //allora è un bisestile
                if (giorno == 29){
                    giorno = 1;
                    mese++;
                }else{
                    giorno++;
                }
            }else{
                if (giorno == 28){
                    giorno = 1;
                    mese++;
                }
            }
        }
        //giorni da 30 giorni
        if (mese == 4 || mese == 6 || mese == 9 || mese == 11){
            if (giorno >= 1 && giorno <= 30){
                if (giorno == 30){
                    giorno = 1;
                    mese++;
                }else{
                    giorno++;
                }
            }
        }else if ((mese != 2) /*&& (mese == 1 || mese == 2 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12)*/){
            if (giorno == 31){
                giorno = 1;
                mese++;
                if (mese > 12){
                    mese = 1;
                    anno++;
                }
            }else{
                giorno++;
            }
        }
        printf("il giorno successivo è : %d / %d / %d", giorno, mese, anno);
    }else{
        printf("!!! DATA SBAGLIATA !!! \n");
    }
    }

    return 0;
}