/*
 Scrivere un programma che legga da tastiera una sequenza di N interi distinti e li inserisca in un albero binario di ricerca (senza ribilanciamento).
 Il programma entra poi in un ciclo infinito nel quale legge un intero i da tastiera e lo cerca nell’albero. Il ciclo termina solo se l’intero i inserito `e strettamente minore di 0. Se i si trova nell’albero stampa la profondit`a alla quale l’elemento si trova (contando da 0), altrimenti stampa NO.
 L’input `e costituito da:
 • una riga contenente la lunghezza N della sequenza;
 • N righe contenenti gli interi che compongono la sequenza;
 • una sequenza di dimensione non nota di richieste espresse con interi. Se i `e minore di 0, il programma termina (non ci sono piu` richieste); altrimenti i rappresenta il valore da cercare.
 L’output contiene una riga per ogni richiesta di ricerca, contenente la profon- dit`a a cui l’elemento si trova (contando da 0) se esso `e presente nell’albero, NO altrimenti.
*/

#include<stdio.h>
#include<stdlib.h>

struct nodoAlberoBinario{
  int label;
  struct nodoAlberoBinario *left;
  struct nodoAlberoBinario *right;
};

typedef struct nodoAlberoBinario NodoAlbero;

typedef enum{false,true} boolean;
typedef NodoAlbero* AlberoBinario;

void Aggiungi ( AlberoBinario *bt, int val){
    if ((*bt)==NULL)
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
        if( (*bt)->label>val)
            Aggiungi(&((*bt)->left),val);
        else
            Aggiungi(&((*bt)->right),val);
    }
}
boolean trova(AlberoBinario bt, int val){
    boolean ris=false;
    if(bt!=NULL)
    ris=(bt->label==val) || trova( bt->left, val) || trova (bt->right, val);
    return ris;
}

int prof (AlberoBinario bt, int val)
{ int ris=0;
    if (bt->label==val)
        ris=0;
    else
    {
        if ((bt->label)>val)
            ris=1+prof(bt->left,val);
        else
            ris=1+prof(bt->right,val);
        
    }
    return ris;
}

int profo(AlberoBinario bt , int val)
{   int ris=-1;
    if(trova(bt,val))
        ris=prof(bt,val);
    return ris;
}

int main(){
    int n,i,a;
    AlberoBinario  bt=NULL;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a);
        Aggiungi(&bt,a);
    }
    int b=1;
    while(b>-1)
    {
        scanf("%d", &b);
        if(b>-1)
        {
            a=profo(bt,b);
            if(a==-1)
                printf("NO\n");
            else
                printf("%d\n", a);
        }
        
    }
}
