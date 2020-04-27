/*
 Si legga dall’input una matrice di interi di dimensione 4 × 2 (4 righe, 2 colonne) e una seconda matrice di dimensione 2 × 3. Per ogni matrice i valori dati in input sono ordinati per riga (per la prima matrice i primi 3 interi sono i valori della prima riga della matrice, e cos`ı via). Si dichiari poi una terza matrice C di dimensioni 4 × 3. Si scriva una funzione che passate tre matrici A di dimentioni n×2, B di dimensioni m×3 e C di dimensioni s×3 (per esempio con prototipo
 void multiplymatr(int A[][2], int B[][3], int C[][3], int n) ) calcoli in C il prodotto di A per B. Si stampi il risultato nella funzione main.
 */

#include <stdio.h>

void multiplymatr (int A[][2],int B[][3],int C[][3],int n){
  // riga per colonna
  for (int i=0; i<n; i++){  // i segue le righe di C
    for (int j=0;j<3;j++){ // j segue le colonne di C
      int ris=0;
      for (int a=0; a<2;a++) // a segue la colonna di A e riga di B
        ris=ris+A[i][a]*B[a][j];
      C[i][j]=ris;}}}

void Stampa (int m, int n, int A[m][n]){
  int i,j;
  for ( i=0;i<m;i++){
    for ( j=0;j<n;j++){
      if (j==0)
        printf("%d",A[i][j]);
      else
        printf(" %d",A[i][j]);}
    if (j !=(n-1))
      printf("\n");}}
void CreaMat (int m,int n ,int A[m][n]){
  int i,j;
  for (i=0;i<m;i++)
    for (j=0;j<n;j++)
      scanf("%d",&A[i][j]);}
int main(){
  int A[4][2],B[2][3],C[4][3],n;
  CreaMat(4,2,A);
  CreaMat(2,3,B);
  multiplymatr(A,B,C,4);
  Stampa(4,3,C);
  return 0;}
