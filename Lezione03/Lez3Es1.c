//Scrivere un programma che legga da tastiera un numero intero x e stabilisca il numero di byte necessario a memorizzare x variabili di tipo intero.

#include <stdio.h>

int main(){
  int a,b;
  scanf("%d",&a);
  b=sizeof(int);
  printf("%d\n",b*a);
  return 0;
}
