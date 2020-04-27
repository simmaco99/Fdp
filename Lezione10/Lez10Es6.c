//Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una funzione ricorsiva RecStampaInversa che stampi gli elementi di una lista partendo dall’ultimo. Scrivere poi un programma che acquisisca da tastiera una successione di numeri interi positivi e li inserisca in ordine di arrivo in testa ad una lista. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista). Si stampi poi il contenuto corrente della lista usando la funzione RecStampaInversa.

#include<stdio.h>
#include<stdlib.h>
typedef enum{false,true} boolean;

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecStampaInversa0(ListaDiElementi lista){
  if (lista!=NULL){
    RecStampaInversa0(lista->next);
    printf("%d -> ", lista->info);
  }}
void RecStampaInversa(ListaDiElementi lista){
  RecStampaInversa0(lista);
  printf( "NULL");}

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;
} 

int main(){
  ListaDiElementi lista=NULL;
  int n=1;
  while (n>=0){
    scanf("%d", &n );
    if (n>=0)
      Aggiungi( &lista,n);}
  RecStampaInversa (lista);
  return 0;}
