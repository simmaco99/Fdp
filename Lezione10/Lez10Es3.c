//Partendo dalla definizione di ListaDiElementi data a lezione, realizzare una funzione ricorsiva RecLength che prenda in input una lista e ne restituisca la lunghezza. Scrivere poi un programma che acquisisca da tastiera una successione di numeri interi positivi e li inserisca in una lista. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista). Si stampi poi la lunghezza della lista calcolata usando la funzione RecLength.

#include<stdio.h>
#include<stdlib.h>

static int i=0;
struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecLenght(ListaDiElementi lis){
  if (lis!=NULL)
    {i++;
      if (lis->next!=NULL)
        RecLenght(lis->next);}
}
void Aggiungi( ListaDiElementi *lis, int n)
{
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;}

int main(){
  int n=1;
  ListaDiElementi lista=NULL;
  while (n>=0){
    scanf("%d", &n);
      if (n>=0)
        Aggiungi(&lista,n);}
  RecLenght(lista);
  printf("%d",i);
  return 0;}
