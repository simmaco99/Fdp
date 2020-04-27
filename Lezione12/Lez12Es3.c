/*
 Scrivere un programma che legga da tastiera una sequenza di N interi di- stinti e li inserisca in un albero binario di ricerca (senza ribilanciamento). Il programma deve quindi utilizzare un’opportuna visita dell’albero per stampare gli interi della sequenza in ordine non decrescente.
 Nella prima riga dell’input si trova la lunghezza N della sequenza; nelle successive N righe si trovano gli interi che compongono la sequenza. L’output contiene la sequenza ordinata degli elementi inseriti nell’albero, uno per riga.
 */

#include<stdio.h>
#include<stdlib.h>
struct nodoAlberoBinario{
  int label;
  struct nodoAlberoBinario *left;
  struct nodoAlberoBinario *right;
};

typedef struct nodoAlberoBinario NodoAlbero;

typedef NodoAlbero *AlberoBinario;
typedef enum{false,true} boolean;


void Aggiungi(AlberoBinario *bt, int val){
  if((*bt)==NULL)
    {
      AlberoBinario aux;
      aux=malloc(sizeof(NodoAlbero));
      aux->label=val;
      aux->left=NULL;
      aux->right=NULL;
      *bt=aux;
    }
  else
    {
      if((*bt)->label>val)
	Aggiungi(&((*bt)->left),val);
      else
	Aggiungi(&((*bt)->right),val);
    }
}

void VisitaSimmetrica (AlberoBinario bt){
  if (bt!=NULL)
    {
      VisitaSimmetrica(bt->left);
      printf("%d\n", bt->label);
      VisitaSimmetrica(bt->right);
    }
}

int main(){
  int n,a,i;
  AlberoBinario bt=NULL;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    Aggiungi(&bt,a);
  }

  VisitaSimmetrica(bt);
}
