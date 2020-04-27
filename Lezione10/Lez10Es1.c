/*
 Scrivere una funzione ricorsiva Pot2 che dato un numero n intero positivo calcoli e restituisca il numero F(n) definito dalle seguente relazione:
 F(1) = 2
 F (n) = 2F (n − 1) se n ≥ 2
 Scrivere poi un programma che acquisisca da tastiera un numero intero positivo n e stampi F(n) calcolato con la funzione Pot2.
 */

#include <stdio.h>

int Pot2(int n){
  int ris;
  if (n==1)
    ris=2;
  else
    if (n>=2)
      ris=2*Pot2(n-1);
  return ris;}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", Pot2(n));
  return 0;
}
