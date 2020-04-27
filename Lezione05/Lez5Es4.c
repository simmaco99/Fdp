//Si realizzi un programma in C che acquisisca da tastiera due numeri interi N e M e utilizzi due funzioni per calcolare il Minimo Comune Multiplo e il Massimo Comune Divisore tra N e M. Il programma stampa sullo standard output prima il MCD(N,M) e poi il mcm(N,M).

#include<stdio.h>

int MCD(int N,int M){
  int i=1,div=1;
  if (M>N){
    while (i<=N)
      {if (N%i==0 && M%i==0)
	  div=i;
	i+=1;}}
  else { while (i<=M)
      {if (N%i==0 && M%i==0)
	  div=i;
	i+=1;}}
  return div;
}
int mcm(int N, int M){
  int i, ris;
  i=N*M;
  while (i>1){
    if (i%N==0 && i%M==0)
      ris=i;
    i-=1;
  }
  return ris;
}
int main(){
  int MCD(int N, int M);
  int mcm(int N,int M);  
int M,N;
  scanf("%d\n %d",&N,&M);
  printf("%d\n%d\n",MCD(N,M),mcm(N,M));
  return 0;}


