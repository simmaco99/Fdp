//Si realizzi un programma nel linguaggio C che, data una sequenza di 10 interi da standard input, facendo uso di una funzione di nome media, cal- coli la media aritmetica (reale) di tutti i valori diversi da zero e di segno uguale all’ultimo valore della sequenza. La media deve essere stampata con esattamente due cifre decimali.
//Assunzione: l’ultimo elemento della sequenza `e sempre diverso da zero.

#include <stdio.h>
float media(int a[],int dim){
  int somma=0,i;
  float n,me;
  for (i=0;i<dim;i++){
    if (a[i]*a[dim-1]>0){
      somma=somma+a[i];
      n=n+1;}}
  me=somma/n;
  return me;}

int main(){
  int i=0, v[10];
  for (i=0;i<10;i++)
    {scanf("%d",&v[i]);}
  printf("%.2f\n",media(v,10));
  return 0;
}
