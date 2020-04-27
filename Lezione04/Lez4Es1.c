//Scrivere un programma che legga da tastiera una sequenza di 10 interi, e stampi la stessa sequenza con ordine invertito, dividendo per 2 gli elementi pari della sequenza.

#include<stdio.h>

int main(){
  int v[9], i=9,a=0;  
  while (i>=0){  
    scanf("%d",&v[i]);
    if (v[i] %2==0) 
          v[i]=v[i]/2;
    i=i-1;
  }

  for(a=0 ;a<10;a=a+1)
    printf(" %d \n ",v[a]);
  return 0;
}
