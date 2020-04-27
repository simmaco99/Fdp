/*
 Data la definizione di tipo
 typedef enum{false,true} boolean;
 partendo dalla definizione di ListaDiElementi data a lezione, realizzare una funzione ricorsiva che controlla che la lista data in input sia ordinata in ordine strettamente crescente. Scrivere poi un programma che acquisisca da tastiera una successione di numeri interi positivi e li inserisca in una lista mantenendo l’ordine di lettura. La lista puo’ contenere duplicati, e l’acquisizione da tastiera termina quando si incontra il primo valore negativo (che non va inserito in lista). Si stampi il risultato della funzione descritta sopra.
 */

#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;


typedef enum{false,true} boolean;

boolean Controlla(ListaDiElementi lis){
  boolean ris;
  if (lis==NULL)
    ris=true;
  else
    { 
      if (lis->next==NULL)
	ris=true;
      else
	{ 
	  if (lis->info >= lis->next->info)
	    ris=false;
	  else
	    ris=Controlla(lis->next);
	}
    }
   return ris;
}
void Aggiungi (ListaDiElementi *lis, int val){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=val;
  aux->next=*lis;
  *lis=aux;
}

void Fondo(ListaDiElementi *lis, int val){
  if (*lis==NULL)
    Aggiungi( lis, val);
  else
    {
      if ((*lis)->next==NULL)
	Aggiungi(&((*lis)->next),val);
      else
	Fondo(&((*lis)->next),val);
    }
}


int main(){
  int n=1;
  ListaDiElementi lis=NULL;
  while (n>-1)
    {
      scanf("%d", &n );
      if (n>-1)
	Fondo(&lis, n);
    }
  boolean ris;
  ris=Controlla(lis);
  if (ris==true)
    printf("True");
  else
    printf("False");
  return 0;
}
      
