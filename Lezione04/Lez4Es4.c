// Scrivere un programma che legga da tastiera 10 interi, li scriva in un array A, e stampi l’indice i del primo elemento che verifica la seguente condizione: A[i] = A[i + 1] − A[i − 1] oppure stampi -1 nel caso in cui nessun elemento verifichi la suddetta condizione.

#include<stdio.h>

int main(){
  int A[10], b=0, i=0;
  for (i=0; i<10;i=i+1)
    scanf("%d",&A[i]);
 i=1;
  while (i<9 && b==0) {
      if (A[i]==A[i+1]-A[i-1])
        b=1;
      else
        i=i+1;
}
  if (b==1)
    printf("%d\n",i);
  else
    printf("-1\n");
  return 0;
 }
