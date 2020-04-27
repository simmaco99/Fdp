// Alcune funzioni utili sugli alberi 
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
void VisitaAnticipata(AlberoBinario bt);
void VisitaSimmetric(AlberoBinario bt);
void VisitaPosticipata(AlberoBinario bt);
boolean Controlla(AlberoBinario bt, int val);
int ContaOcc(AlberoBinario bt, int val);
void Aggiungi(AlberoBinario *bt, int val);
int Profondita(AlberoBinario bt, int val);
int Altezza(AlberoBinario bt);
int ContaLivello(AlberoBinario bt, int n , int val );
// INIZIO DICHIARAZIONE STAMPA LIVELLO
    struct alberoLista{
      AlberoBinario tree;
        struct alberoLista *next;
    };

    typedef struct alberoLista AlberoDiLista;
    typedef AlberoDiLista * ListaDiAlberi;

    void AggiungiAlberoCoda(ListaDiAlberi *lis , AlberoBinario bt);
    void CreaListaAlberi(ListaDiAlberi *lis);
    void StampaListaAlberi(ListaDiAlberi list)
    void StampaLivello(AlberoBinario *bt) // FUNZIONE PRINCIPALE

// FINE DICHIARAZIONE STAMPA LIVELLO

/*
 IL seguente file racchiude funzioni in grado di
 1. Visita simmetrica
 2. Visita anticipata
 3. Visita posticipata
 4. Controllare se e presente un elemento
 5. Contare le occorrenze di un elemento
 6. Aggiungere un elemento ad un albero di ricerca
 7. Trovare la profondita di un valore in un albero di ricerca
 8. Trovare la profonditá massima di un albero
 9. Conta valori per livello
 9. Stampare albero per livelli
 */



void VisitaAnticipata(AlberoBinario bt){
  if (bt!=NULL)
    {
      printf("%d", bt->label);
      // qui si modifica qualcosa
      VisitaAnticipata(bt->left);
      VisitaAnticipata(bt->right);
    }}
	
void VisitaSimmetrica(AlberoBinario bt ){
    if(bt!=NULL){
        VisitaSimmetrica(bt->left);
        printf("%d -> ", bt->label);
//      qui si modifica
        VisitaSimmetrica(bt->right);
    }
}


void VisitaPosticipata(AlberoBinario bt){
  if (bt!=NULL){
    VisitaPosticipata(bt->right);
    VisitaPosticipata(bt->left);
    printf("%d", bt->label);
    // qui si modifica
  }}



boolean Controlla( AlberoBinario bt, int val){
    boolean ris=false;
    if(bt!=NULL)
        ris=( (bt->label== val) || Controlla( bt->left,val) || Controlla(bt->right, val));
    
    return ris;
}


int ContaOcc(AlberoBinario bt, int val){
  int ris=0;
  if (bt !=NULL){
    if ((bt->label)==val)
      ris++;
    ris=ris+ContaOcc(bt->left,val)+ContaOcc(bt->right,val);
  }
  return ris;
}

void Aggiungi( AlberoBinario *bt, int val){
    if((*bt)==NULL){
        AlberoBinario aux;
        aux=malloc(sizeof(NodoAlbero));
        aux->label=val;
        aux->left=NULL;
        aux->right=NULL;
        *bt=aux;}
    else
    {
        if (((*bt)->label)>val)
            Aggiungi(&((*bt)->left),val);
        else
            Aggiungi(&((*bt)->right),val);
    }
}

int Profondita(AlberoBinario bt , int val)
{   int ris=-1;
    if(trova(bt,val))
    {   ris=0;
        if (bt->label==val)
            ris=0;
        else
        {
            if ((bt->label)>val)
                ris=1+prof(bt->left,val);
            else
                ris=1+prof(bt->right,val);
            
        }
        
    }
    return ris;
}


int max (int a,int b)
{
    int ris=a;
    if(a<b)
        ris=b;
    return ris;
}
int Altezza(AlberoBinario bt)
{
    int ris;
    if (bt==NULL)
        ris=0;
    else
        ris=max(Altezza(bt->left),Altezza(bt->right))+1;
    return ris;
}

// alla prima chiamata n=0, in val va messo il numero di nodi di quel livello
// ATTENZIONE la radice si conta come 1 e non come usualmente 0 ;
int ContaLivello(AlberoBinario bt, int n , int val )
{
    int ris=0;
    if(bt!=NULL)
    {
        if(n<val)
        {
            n=n+1;
            int a,b;
            a=ContaLivello(bt->left,n,val);
            b=ContaLivello(bt->right,n,val);
            ris=a+b;
            
        }
        if(n==val)
            ris=1;
    }
    return ris;
}


// FUNZIONI NECESSARIE PER STAMPARE UN ALBERO PER LIVELLI

void StampaLivello(AlberoBinario *bt)
{
    ListaDiAlberi lista=NULL;
    AggiungiAlberoCoda(&lista, *bt);
    CreaListaAlberi(&lista);
    StampaListaAlberi(lista);
}

void AggiungiAlberoCoda(ListaDiAlberi *lis , AlberoBinario bt){
    if (*lis==NULL)
    {
        ListaDiAlberi aux;
        aux=malloc(sizeof(AlberoDiLista));
        aux->tree=bt;
        aux->next=NULL;
        *lis=aux;
    }
    else
        AggiungiAlberoCoda(&((*lis)->next),bt);
}

void CreaListaAlberi(ListaDiAlberi *lis){
    if(*lis!=NULL)
    {
        if((*lis)->tree->left !=NULL)
            AggiungiAlberoCoda(lis, (*lis)->tree->left);
        if((*lis)->tree->right !=NULL)
            AggiungiAlberoCoda(lis, (*lis)->tree->right);
        CreaListaAlberi(&((*lis)->next));
    }
}

void StampaListaAlberi(ListaDiAlberi list){
    if(list==NULL)
        printf("NULL");
    else
    {
        printf("%d -> ", list->tree->label);
        StampaListaAlberi(list->next);
    }
}

