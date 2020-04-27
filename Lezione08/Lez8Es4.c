//Scrivere un programma che acquisisca da tastiera due successioni di interi positivi, entrambe terminate da un numero negativo, e le inserisca in due liste distinte. Scegliere se realizzare una procedura o una funzione che, prese in input le due liste, crei una terza lista contenente l’intersezione ordinata tra le due precedenti: non vi devono quindi essere elementi ripetuti e i valori devono essere memorizzati in ordine crescente. Si stampi il contenuto della lista intersezione.

#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiEl\
ementi;

void swap( ListaDiElementi *lis, int val){
    int trovato=0;
    ListaDiElementi occ;
    if (*lis!=NULL){
        occ=*lis;
        if (occ->info==val)
            trovato=1;
        while ( !trovato && occ->next !=NULL)
            if (occ->info==val)
                trovato=1;
            else
                occ=occ->next;
    }
    if ( !trovato){
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
}
void Stampa(ListaDiElementi lis){
  if (lis!=NULL){
    printf("%d", lis->info);
    if ( lis->next!=NULL){
      printf("\n");
      Stampa(lis->next);}}}

void Int( ListaDiElementi l1, ListaDiElementi l2, ListaDiElementi *l3){
  ListaDiElementi occ;
  int el, trovato;
  if ( l2!=NULL){
    occ=l2;
    if (l1!=NULL){
      el=l1->info;
      if (occ->info==el)
	swap(l3,el);
      else{
	if (occ->info==el)
	  swap(l3,el);
	else{
        
	  while (occ->next!=NULL){
	    if (occ->info==el)
	      {swap(l3,el);
		trovato=1;
	      }
	    occ=occ->next;}
        if (occ->info==el)
            swap(l3,el);
	}}
      if ( l1->next!=NULL)
	Int(l1->next, l2,l3);}}}
  int main(){
  int n=1;
  ListaDiElementi l1=NULL, l2=NULL,l3=NULL;
  while (n>=0){
    scanf("%d", &n );
    if ( n>=0)
      swap(&l1,n);}
  n=1;
  while ( n>=0){
    scanf( "%d",&n);
    if ( n>=0)
      swap (&l2,n);
  }
  Int(l1,l2,&l3);
  Stampa(l3);
}
  
