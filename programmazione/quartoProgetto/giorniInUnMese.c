#include <stdio.h>

int main(){

    int mese = 0, anno = 0, nGiorni = 0;
    printf("Inserisci mese e anno : ");
    scanf("%d %d", &mese, &anno);

    if(mese ==  2){
        if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
            nGiorni = 29;
        }else{
            nGiorni = 28;
        }
    }
    if (mese == 4 || mese == 6 || mese == 9 || mese == 11){
            nGiorni = 30;
        }else{
            nGiorni = 31;
        }
    printf("I numeri dei giorni in quel mese sono : %d", nGiorni);
    return 0;
}