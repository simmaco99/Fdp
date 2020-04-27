/*
 Le liste concatenate permettono di creare facilmente altre strutture dati, come ad esempio le pile. Partendo dalla definizione
 struct elemento{
 int info;
 struct elemento * next;
 };
 typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;
 scegliere se realizzare una procedura o una funzione che :
 1. data la testa della lista (passata opportunamente alla procedura o fun- zione) e un intero v aggiunga in testa alla lista un nuovo nodo conte- nente il valore v;
 2. data la testa della lista (passata opportunamente alla procedura o fun- zione) rimuova il nodo in cima alla lista, se la lista non `e vuota, altri- menti non deve fare nulla;
 3. data la testa della lista stampi il contenuto attuale della lista.
 Il programma dovra’ acquisire da tastiera una lista di numeri interi. L’operazione da eseguire dipende dal valore acquisito:
 • se il valore e’ strettamente maggiore di 0, inserisce il valore in lista usando la procedura o funzione del punto 1;
 • se il valore e’ pari a 0, rimuove il nodo usando la procedura o funzione del punto 2;
 • se il valore e’ strettamente minore di 0 termina stampando il contenuto corrente della lista usandola procedura del punto 3.
 */

#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;


void testa(ListaDiElementi *p, int v )
{ 
  ListaDiElementi aux;
    
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=v;
  aux->next=*p;
  *p=aux;
 }

void rimuovi(ListaDiElementi *p){
  if (*p!=NULL)
    {*p=(*p)->next;}}

void stampa(ListaDiElementi p){
  if(p!=NULL){
    printf("%d",p->info);
      printf("\n");
    //printf("%d",p->next->info);
      stampa(p->next);}
  

}

int main(){
  int n=10;
  ListaDiElementi lista = NULL;

  while (!(n<0)){
    scanf("%d", &n);
    if(n>0)
      testa(&lista,n);
    if(n==0)
      rimuovi(&lista);
  }
  stampa(lista);
  return 0; }
    




