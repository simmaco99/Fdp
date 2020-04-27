/*
 Si realizzi un programma che legga 3 interi da standard input ed applichi la funzione a 3 argomenti ordered swap(·,·,·) alle 3 variabili in cui sono stati memorizzati i 3 valori. I valori letti devono essere passati alla funzione nell’ordine in cui vengono acquisiti da tastiera.
 Si implementi la funzione ordered swap, che scambia il contenuto delle 3 variabili di input in modo che la variabile corrispondente al primo argomento contenga l’intero minore, la seconda variabile contenga l’intero mediano e la terza contenga l’intero di valore maggiore.
 Si stampi a video il contenuto delle 3 variabili all’uscita dall’esecuzione della funzione.
 */

#include <stdio.h>

int min_azzera(int v[10]){
  int min=0,i;
  for (i=0; i<10; i++){
    if (v[i]<min)
      {min=v[i];}
    if (i%2==1)
      {v[i]=0;}
    printf("%d\n",v[i]);}
  return min;}

int main(){
  int v[10],i;
  for (i=0; i<10;i++)
    scanf("%d", &v[i]);
  printf("%d",min_azzera(v));
  return 0;}
