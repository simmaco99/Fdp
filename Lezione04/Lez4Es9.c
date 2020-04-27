//Scrivere un programma che, preso in ingresso un numero intero x, stampi (con un numero per riga) la Tabellina di x (partendo da x ∗ 1 e terminando con x ∗ 10).

#include <stdio.h>

int main(){
  int x,i ;
  scanf("%d",&x);
  for (i=1;i<11;i=i+1)
    printf("%d\n",x*i);
  return 0; 
}
