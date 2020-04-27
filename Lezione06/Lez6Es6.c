/*
 Si scriva una funzione che data una matrice n x 3 calcoli l’indice dell’ultima colonna che contiene solo multipli di 3, la funzione deve ritornare -1 nel caso in cui nessuna colonna rispetti questa proprieta`. Si scriva un programma che legga dall’input una matrice di interi di dimensione 4x3 (4 righe, 3 colonne) e si stampi il risultato della funzione.
 I valori dati in input sono ordinati per riga (i primi 3 interi sono i valori della prima riga della matrice, e cos`ı via).
 */

#include <stdio.h>

int Mult(int A[][3],int n){
  int i=0,j=0,stop=0, ris=-1;
  // j-esima colonna continuo fino a quando trovo multipli
  for (j=0;j<3;j++) {
    while (i<n && !stop){
      if (A[i][j]%3==0)
        i++;
      else
        stop=1;}
    i=0;
    if (!stop)
      ris=j;
    stop=0;
  }
  return ris;
}

int main(){
  int i,j,A[4][3];
  for (i=0;i<4;i++)
    for (j=0;j<3;j++)
      scanf("%d",&A[i][j]);
  printf( "%d", Mult(A,4));
  return 0;}
        
