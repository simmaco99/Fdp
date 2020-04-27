/*
 Scrivere un programma che legga da tastiera una sequenza di 10 interi scriven- dola in un array, quindi stampi (uno per linea, e nello stesso ordine in cui sono stati immessi) i valori della sequenza che rispettano una di queste due proprieta`:
 1. Siano positivi e pari, oppure
 2. Siano negativi e succeduti da un valore positivo.
 Note: lo zero `e considerato un valore positivo.
 */

#include<stdio.h>

int main(){
  int A[10],i=0;
  for (i=0; i<10;i=i+1)
    scanf("%d",&A[i]);
 
  for (i=0; i<10;i=i+1)
    if (A[i]>=0 && A[i]%2==0)
      printf("%d\n",A[i]);
    else
      if(A[i]<0 && A[i+1]>=0)
        if (i!=9)
        printf("%d\n",A[i]);
  return 0;
}
