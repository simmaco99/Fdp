/*
 Si legga dall’input due matrici di interi di dimensione 4 × 3 (4 righe, 3 colonne). I valori dati in input sono ordinati per riga (per la prima ma- trice i primi 3 interi sono i valori della prima riga della matrice, e cos`ı via). Si dichiari poi una terza matrice C sempre 4 × 3. Si scriva un programma che calcola la matrice somma di A + B e stampi il risultato.
 */

#include <stdio.h>

int main(){
  int a[4][3],b[4][3],c[4][3];
  for (int i=0; i<4;i++) // i scorre le righe m[i][j]
    {
      for (int j=0;j<3;j++)
        scanf("%d",&a[i][j]);}

 for (int i=0; i<4;i++) // i scorre le righe m[i][j]
   {
     for (int j=0;j<3;j++)
        scanf("%d",&b[i][j]);}

 for(int i=0;i<4;i++)
   {
     for(int j=0;j<3;j++){
       int n,m;
       n=a[i][j];
       m=b[i][j];
       c[i][j]=n+m;
       printf("%d ", c[i][j]);
     }
     printf("\n");
   }
 return 0;}
