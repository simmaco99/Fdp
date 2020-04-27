/*Dato le seguenti dichiarazioni da copiare nel proprio programma
struct persona {
    char nome[10];
    struct persona * mamma;
    struct  persona * babbo;
};
typedef struct persona Persona;
si scriva un programma che dichiara tre variabili di tipo persona e leggendo da input prima il nome del figlio (composto da 10 caratteri eventualmente aggiungendo il carattere speciale $), seguito dal nome della madre (composto da 10 caratteri eventualmente aggiungendo il carattere speciale $) e infine dal nome del padre (composto da 10 caratteri eventualmente aggiungendo il carattere speciale $) riempia e inizializzi in modo opportuno le tre strutture (utilizzando la costante NULL dove il padre e la madre non siano conosciuti) in modo da rappresentare una famiglia di 3 persone. Si scriva inoltre una procedura che presa una persona stampi il nome e a capo il nome della madre se esiste altrimenti si stampi ”Sconosciuto” (si controlli che il puntatore rel- ativo sia diverso da NULL ) seguito dal nome del padre se esiste altrimenti si stampi ”Sconosciuto” (si controlli che il puntatore relativo sia diverso da NULL). Si chiami la funzione su tutti e tre i componenti della famiglia.
*/

#include <stdio.h>
struct persona {
  char nome[10];
  struct persona * mamma;
  struct  persona * babbo;
};
typedef struct persona Persona;
void stampa(Persona a){
  int i=0;
  Persona *b;
  b=&a;
  if (b!=NULL){
    for(i=0;i<10;i++)
      printf("%c",a.nome[i]);
    printf("\n");
    if(a.mamma==NULL)
      printf("Sconosciuto");
    else
      {
	for(i=0;i<10;i++)
	  printf("%c",a.mamma->nome[i]);
      }
    if(a.babbo==NULL)
      printf("Sconosciuto");
    else
      {
	for(i=0;i<10;i++)
	  printf("%c",a.babbo->nome[i]);
      }
  }}

int main(){
  int i=0;
  Persona f,m,b;
  for(i=0;i<10;i++)
    scanf("%c",&f.nome[i]);
  for ( i=0;i<10;i++)
    scanf("%c",&m.nome[i]);
  for ( i=0;i<10;i++)
    scanf("%c",&b.nome[i]);
  f.mamma=&m;
  f.babbo=&b;
  m.babbo=NULL;
  m.mamma=NULL;
  b.babbo=NULL;
  b.mamma=NULL;
  stampa(f);
   printf("\n");
  stampa(m);
  printf("\n");
  stampa(b);
  return 0; 
}
