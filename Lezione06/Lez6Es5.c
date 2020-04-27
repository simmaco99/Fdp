/*
 Si realizzi un programma che legga due array di 3 interi ciascuno a e b da standard input ed applichi una funzione che verifichi che esiste almeno un elemento di a minore di tutti gli elementi di b.
 Si utilizzi l’aritmetica dei puntatori e si cerchi di scrivere una funzione che si fermi il prima possibile.
 Si stampi a video il risultato della verifica (TRUE o FALSE).
 */

#include <stdio.h>

int max(int a[3],int b[3]){
  int i,j=0, stop=0, trovato=0;
  i=0;
  while ( i<3 && !trovato){
    j=0;
    stop=0;
    while (j<3 && !stop)
      {if (a[i]<b[j])
          j++;
        else
          stop=1;}
    if (!stop)
      trovato=1;
    else
      i++;
}
  return trovato;
}

int main(){
  int i, v[3],w[3];
  for (i=0;i<3;i++)
    scanf("%d",&v[i]);
  for (i=0;i<3;i++)
    scanf("%d",&w[i]);
  int ris;
  if (max(v,w))
    printf("TRUE");
  else
    printf("FALSE");
}
