//Scrivere un programma che legga da tastiera un numero intero x e stampi il valore di x!.

#include<stdio.h>

int main(){
  int n=0, f=1;
  scanf("%d",&n);
  while (n>0)
    { f=f*n; 
      n=n-1;}
  printf("%d\n", f);
  return 0; 
}
