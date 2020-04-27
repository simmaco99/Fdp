//Si realizzi un programma nel linguaggio C che, dati due interi N e M da stan- dard input, facendo uso di una funzione di nome multipli, calcoli l’insieme degli interi appartenenti all’intervallo [1,N] che sono multipli di M. La chia- mata a funzione dovr`a stampare tutti gli elementi dell’insieme ordinati in ordine crescente.

#include <stdio.h>
int multipli (int N,int M ){
  int i=1,m=M;
    while (m<=N){
     i+=1;
     printf("%d\n",m);
     m=M*i;}
    return 0 ;
}

int main(){
  int multipli(int N, int M);
  int N,M;
  scanf("%d\n %d",&N,&M);
  multipli(N,M);
  return 0;
}

