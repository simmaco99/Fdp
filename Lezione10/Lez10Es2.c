//Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una funzione ricorsiva RecStampa che stampi gli elementi di una lista nel formato mostrato nell’esempio. Scrivere poi un programma che acquisisca da tastiera una successione di numeri interi positivi e li inserisca in ordine di arrivo in testa ad una lista. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista). Si stampi poi il contenuto corrente della lista usando la funzione RecStampa.

#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecStampa(ListaDiElementi lis){
  if (lis==NULL)
    printf("NULL");
  else
    {
      if (lis->next==NULL)
        printf("%d -> NULL", lis->info);
      else{
        printf("%d -> ", lis->info);
        RecStampa(lis->next);
      }}}

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  
  if (*lis==NULL)
    *lis=aux;
  else{
    *lis=aux;}}
    
 int main(){
  ListaDiElementi lista=NULL;
  int n=1;
  while (n>=0){
    scanf("%d", &n);
    if (n>=0)
      Aggiungi(&lista, n);
  }
  RecStampa(lista);}
