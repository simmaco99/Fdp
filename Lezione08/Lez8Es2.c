/*
 Si implementi una lista concatenata che contenga, come dati, interi positivi. Si scelga se implementare procedure o funzioni che realizzino i seguenti punti:
 • Aggiungere un elemento in fondo alla lista;
 • Aggiungere un elemento in cima alla lista;
 • Dato un valore positivo v, eliminare la prima occorrenza di v nella lista (non modificare la lista nel caso che non contenga v);
 Quindi, scrivere un programma che legga degli interi. Per ogni intero letto (e nello stesso ordine dell’input), si applichi una delle seguenti modifiche:
 • Se il valore letto v `e strettamente negativo, rimuovere il primo elemento uguale a |v| dalla lista (non modificare la lista nel caso che questa non contenga |v|);
 • Se il valore letto v `e positivo e pari, aggiungerlo in cima alla lista;
 • Se il valore letto v `e positivo e dispari, aggiungerlo in fondo alla lista;
 • Se il valore letto `e 0, terminare l’esecuzione del programma stampando, in ordine, gli elementi della lista.
 */

#include <stdio.h>
#include <stdlib.h>

struct EL {
  int info;
  struct EL *next;
};
typedef struct EL ElementoLista;
typedef ElementoLista *ListaDiElementi;

void StampaLista(ListaDiElementi lis)
{
  if (lis !=NULL){
    printf("%d",lis->info);
    if ( lis->next!=NULL )
      {
	printf("\n");
	StampaLista(lis->next);}}}
      
void testa (ListaDiElementi *lis, int val) {
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoLista));
  aux->info=val;
  aux->next=*lis;
  *lis=aux;
}

void fondo(ListaDiElementi *lis, int val ) {
  ListaDiElementi aux; 
  aux=malloc(sizeof(ElementoLista));
  aux->info=val;
  aux->next=NULL;
  ListaDiElementi i; 
  if ( *lis ==NULL) // se la lista è vuota inserisce in cima
    *lis=aux;
  else{
    i=*lis;
    while ( i->next!=NULL) 
      i=i->next;
    i->next=aux;
  }
}

void CancellaPrimo(ListaDiElementi *lis){
  ListaDiElementi aux;
  if (*lis!=NULL)
    {
      aux=*lis;
      *lis=(*lis)->next;
      free (aux);}}

void CancellaOccorrenza(ListaDiElementi *lis, int val){

  ListaDiElementi corr;  // elemento corrente
  ListaDiElementi prec;  // elemento successivo
  int trovato=0;
  if (*lis!=NULL){  
    if ((*lis)->info==val)  // elimina il primo elemento
      { 
	ListaDiElementi aux;
	aux=*lis;
	*lis=(*lis)->next;
	free(aux);}
    else
      {
	prec=*lis; 
	corr=prec->next;
	while ( corr!= NULL && !trovato) 
	  {
	    if( corr->info==val)
	      {
		trovato=1;
		prec->next=corr->next;
		free (corr);}
	    else {
	      prec= prec->next;
	      corr=corr->next;}
	  }}}}
void CancellaOccorrenzaRic(ListaDiElementi *lis,int val){
  if ( (*lis) !=NULL)
    {
    if ( (*lis)->info==val)
      {
	ListaDiElementi aux;
	aux=*lis; 
	*lis=(*lis)->next;
	free(aux);
      }
    else
      CancellaOccorrenzaRic(&((*lis)->next),val);}}

int main(){
  ListaDiElementi lista=NULL;
  int letto=1;
  while( letto !=0){
    scanf("%d",&letto);
    if (letto<0)
      CancellaOccorrenzaRic(&lista,-letto);
    if ( letto%2==0 && letto>0 )
      testa(&lista, letto);
    if (letto%2==1 && letto>0)
      fondo(&lista, letto);}
  StampaLista(lista);
  return 0;}
