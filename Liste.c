//Alcune funzioni utili sulle liste
#include<stdio.h>
#include<stdlib.h>
typedef enum{false,true} boolean;
struct El{
  int info;
  struct El *next;
};

typedef struct El ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

void AggiungiTesta(ListaDiElementi *lis, int val );
void AggiungiCoda(ListaDiElementi *lis, int val );
void swap(ListaDiElementi *lis, int val);
void EliminaTesta(ListaDiElementi *lis);
void EliminaCoda(ListaDiElementi *lis);
void EliminaPrimaOcc(ListaDiElementi *lis, int val);
void EliminaOcc(ListaDiElementi *lis, int val);
void EliminaUltima(ListaDiElementi *lis, int val);
void PrintList(ListaDiElementi lis);
ListaDiElementi ListaInversa(ListaDiElementi lis);
boolean Trova(ListaDiElementi lis, int val);
int ContaOcc(ListaDiElementi lis, int val);
int Lunghezza(ListaDiElementi lis);
void Modifica(ListaDiElementi *lis); // aggiunge -1 prima di un elemento che verifica una condizione

int main(){
  ListaDiElementi l1=NULL, l2=NULL, l3;
 for (int i=0;i<2;i++)
   {
     AggiungiTesta(&l1,1);
     AggiungiTesta(&l1,2);
   }
  AggiungiTesta(&l1,3);
  PrintList(l1);
  PrintList(ListaInversa(l1));
  printf("%d", Lunghezza(l1));
  return 0;
}



void AggiungiTesta(ListaDiElementi *lis, int val ){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=val;
  aux->next=*lis;
  *lis=aux;
}


void AggiungiCoda(ListaDiElementi *lis, int val){
  if (*lis==NULL)
    {
      ListaDiElementi aux;
        aux=malloc(sizeof(ElementoDiLista));
      aux->info=val;
      aux->next=NULL;
      *lis=aux;
    }
  else
    AggiungiCoda(&((*lis)->next),val);
}

void swap(ListaDiElementi *lis, int val)
{
    if((*lis==NULL) || ((*lis)->info>val) )
    AggiungiTesta(lis, val);
  else
    swap(&((*lis)->next),val);
}

void EliminaTesta(ListaDiElementi *lis){
  if (*lis!=NULL)
    {
      ListaDiElementi el=*lis;
        *lis=(*lis)->next;
      free(el);
    }
}


void EliminaCoda(ListaDiElementi *lis){
  if (*lis!=NULL)
    {
      if ((*lis)->next==NULL)
	*lis=NULL;
      else
	EliminaCoda(&((*lis)->next));
    }
}

void EliminaPrimaOcc(ListaDiElementi *lis, int val){
  if(*lis!=NULL)
    {
      if((*lis)->info==val)
	{
	  ListaDiElementi el=*lis;
	  *lis=(*lis)->next;
	  free(el);
	}
      else
	EliminaPrimaOcc(&((*lis)->next),val);
    }
}

void EliminaOcc(ListaDiElementi *lis, int val)
{
  if(*lis!=NULL)
    {
      if ((*lis)->info==val)
	{
	  ListaDiElementi el=*lis;
	  *lis=(*lis)->next;
	  free(el);
	  EliminaOcc(lis,val); //2 istruzioni prima siamo andati avanti
	}
      else
	EliminaOcc(&((*lis)->next),val);
    }
}

void EliminaUltima(ListaDiElementi *lis, int val)
{
  if (*lis!=NULL)
    {
      ListaDiElementi prec=NULL, occ=*lis,ultimo;
// ultimo  salva il prec di quello da eliminare (se ultimo=NULL va eliminata la testa)
      int trovato=0;
      while( occ->next!=NULL)
	{
	  if (occ->info==val)
	    {
	      trovato=1;
	      ultimo=prec;
	    }
	  prec=occ;
	  occ=occ->next;
	}
      if(occ->info==val)
	EliminaCoda(lis);
      else
	{
	  if (trovato)
	    {
	      if(ultimo==NULL)
		EliminaTesta(lis);
	      else
		{
		  ListaDiElementi el=ultimo->next;
		  ultimo->next=(ultimo->next)->next;
		  free(el);
		}
	    }
	}
    }
}
void PrintList(ListaDiElementi lis)
{
  if (lis==NULL)
    printf("NULL\n");
  else
    {
      printf("%d -> ", lis->info);
      PrintList(lis->next);
    }
}

ListaDiElementi ListaInversa(ListaDiElementi lis){
  ListaDiElementi ris=NULL;
  if(lis!=NULL)
    {
      ListaDiElementi occ=lis;
      while(occ!=NULL)
	{
	AggiungiTesta(&ris,occ->info);
	occ=occ->next;
	}
    }
  return ris;
}

boolean Trova(ListaDiElementi lis, int val ){
    boolean ris=false;
    if(lis!=NULL)
    {
        if (lis->info==val)
            ris=true;
        else
            ris=Trova(lis->next,val);
        
    }
    return ris;
}

int ContaOcc(ListaDiElementi lis,int val)
{
  int ris=0;
  if(lis!=NULL)
    {
      if (lis->info==val)
	ris=1+ContaOcc(lis->next, val);
      else
	ris=ContaOcc(lis->next,val);
    }
  return ris;
}


int Lunghezza(ListaDiElementi lis){
  int ris=0;
  if (lis!=NULL)
    ris=1+Lunghezza(lis->next);
  return ris;
}


void Modifica(ListaDiElementi *lis){
  if (*lis!=NULL){
    if (condizione){
      ListaDiElementi aux;
      aux=malloc(sizeof(ElementoDiLista));
      aux->info=-1;
      aux->next=*lis;
      *lis=aux;
      Modifica(&((*lis)->next->next));}
    else
      Modifica(&((*lis)->next));
  }}
