//Scrivere un programma che legga da tastiera un numero intero n e stampi n asterischi sulla prima linea, n − 2 asterischi sulla seconda linea, n − 4 sulla terza e cos`ı via, fino ad arrivare a stampare uno o due asterischi sull’ultima linea.

#include<stdio.h>

int main(){
  int n, i=0;
  scanf("%d",&n);
  while (n>0){
    for (i=0; i<n; i=i+1)
      printf("*");
    printf("\n");
    n=n-2;}
  return 0;
}
