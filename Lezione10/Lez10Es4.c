//Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una procedura o funzione ricorsiva che prenda in input un intero n e una lista e ne cancelli tutti gli elementi il cui campo info e’ multiplio di n. Scrivere poi un programma che acquisisca da tastiera un intero n seguito da una successione di numeri interi positivi e e li inserisca in ordine di arrivo in testa ad una lista. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista). Si stampi poi nel main la lista modificata come descritto sopra.
#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;
}

void Stampa(ListaDiElementi lis){
  if (lis==NULL)
    printf("NULL");
  else {

    printf("%d -> ", lis->info);
    Stampa(lis->next);}}

void EliminaTesta(ListaDiElementi *lis){
  if (*lis!=NULL){
    ListaDiElementi aux=*lis;
    *lis=(*lis)->next;
    free(aux);
  }}

void EliminaValore (ListaDiElementi *lis,int n){
  if (*lis!=NULL)
    {
      if( (*lis)->info%n==0)
	{
	  EliminaTesta(lis);
	  EliminaValore(lis,n);
	}
      else
	EliminaValore( & ((*lis)->next),n);
    }
}
       

int main(){
  ListaDiElementi lis=NULL;
  int n=1,el;
  scanf("%d",&el);
  while(n>=0)
    {
    scanf("%d",&n);
      if (n>=0 )
	Aggiungi(&lis,n);
    }
  EliminaValore(&lis,el);
  Stampa(lis);}
