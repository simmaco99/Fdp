/*
 Si vuole gestire un insieme di dipendenti di un’azienda identificati da un codice. Di ogni dipendente interessa lo stipendio e il mese e l’anno di as- sunzione all’interno dell’azienda. Si scriva una procedura (una funzione che ritorna void) che aumenti lo stipendio di tutti i dipendenti assunti prima del 5/2000 di una certa percentuale passata come parametro alla funzione. Si testi la funzione scrivendo un main che legga i dati di 2 dipendenti e la percentule dell’aumento e chiamando la funzione cambi gli stipendi dei dipendenti assunti prima del maggio del 2000. Nel main si stampi infine il codice e lo stipendio dei dipendenti che guadagnano piu’ di 1200 euro.
 */
#include<stdio.h>
struct data{
    int mese;
    int anno;
};

struct dip {
    int id;
    struct data d;
    int sti;
};

typedef struct dip Dip;

void aumento(int au, Dip *a)  {
    for (int i =0;i<2;i++)
    {
        if( ((a->d).anno <2000) || ( (a->d).anno==2000 && (a->d).mese<5))
        {
            a->sti= a->sti+ (a->sti)*au/100;

        }
        a++;
    }}

int main(){
    Dip v[2], *p=v;
    int i=0;
    int x;
    for (i=0; i<2; i++)
    {
//        printf("ID: ");
        scanf("%d",&v[i].id);
//        printf("MESE: ");
        scanf("%d",&v[i].d.mese);
//        printf("ANNO: ");
        scanf("%d",&v[i].d.anno);
//        printf("STIPENDIO: ");
        scanf("%d",&v[i].sti);
    }
    //printf( "AUMENTO: " );
    scanf("%d", &x);
    aumento( x, p);
    if(v[0].sti>1200)
        printf("%d %d", v[0].id, v[0].sti);
    if(v[1].sti>1200)
{printf("\n");
printf("%d %d",v[1].id, v[1].sti);}
    return 0;
}

