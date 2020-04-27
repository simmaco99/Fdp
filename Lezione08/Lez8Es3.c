//Scrivere un programma che acquisisca da tastiera una successione di numeri interi positivi e li inserisca in maniera ordinata (crescente) all’interno di una lista. La lista puo’ contenere duplicati. L’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista) e viene stampato il contenuto corrente della lista.

#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void swap( ListaDiElementi *lis, int val){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=val;
  if ((*lis)==NULL)
    {aux->next=NULL;
      *lis=aux;
    }
  else { 
    if ((*lis)->info>val)
      {
	aux->next=*lis;
	*lis=aux;}
    else 
      swap(&((*lis)->next), val);}}

void Stampa(ListaDiElementi lis){
  if (lis!=NULL){
    printf("%d", lis->info);
    if ( lis->next!=NULL){
      printf("\n");
      Stampa(lis->next);}}

}
int main(){
  int n=1;
  ListaDiElementi lista=NULL;
  while ( n>=0){
    scanf("%d", &n);
    if ( n>=0)
      swap(&lista, n );
  }
  Stampa(lista);
  return 0; }

  

  
