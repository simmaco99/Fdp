/*
 Si scriva un programma di gestione di un gattile che per 4 volte legga:
 • Un codice identificativo del gatto (un intero);
 • L’eta` del gatto in anni (un intero);
 • Il peso del gatto in Kg (un float);
 • Il tipo di cibo assunto dal gatto, espresso come 0 per le crocchette, 1 per le scatolette, 2 per il tonno in scatola.
 Nello stesso ordine in cui sono stati immessi i dati dei gatti si stampino, uno per linea, i codici identificativi e il tipo di cibo di tutti i gatti che hanno problemi di dieta in giovane eta`, ovvero abbiano meno di 4 anni e pesino piu` della media dei gatti. A fianco del codice identificativo, si stampi, separato da uno spazio, il tipo di cibo assunto dal gatto, ovvero crocchette, scatolette oppure tonno.
 */

#include <stdio.h>

struct gatto {
  int id;
  int eta;
  float peso;
  int cibo;
};

int main(){
  struct gatto v[4];
  int i =0;
  float media=0;
  for (i=0; i<4; i++){
    //printf("id: ");
    scanf("%d", &v[i].id);
    //printf("eta: ");
    scanf("%d", &v[i].eta);
    //printf("peso: ");
    scanf("%f", &v[i].peso);
    //printf("cibo: ");
    scanf("%d", &v[i].cibo);
    media=media+v[i].peso;
  }
  media=media/4;
  for (i=0; i<4; i++){
    if(v[i].eta<4 && v[i].peso> media)
      {printf("%d " ,v[i].id);
        switch (v[i].cibo){
        case 0: printf( "crocchette \n" ); break;
        case 1: printf( "scatolette \n" ); break;
        case 2: printf( "tonno in scatola \n" ); break;}}}
  return 0; }
