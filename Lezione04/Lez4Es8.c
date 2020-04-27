//Scrivere un programma che legga da tastiera due interi h e l e stampi un rettangolo fatto da asterischi, con altezza h e lunghezza l .

#include<stdio.h>

int main(){
  int h,l,i,ii;
  scanf("%d %d", &h,&l);
  if ( h==1 && l==1)
    printf("*");
    else{ 
 for (i=0; i<l; i=i+1)
    printf("*");
  for (i=1; i<h-1;i=i+1){
    printf("\n *"); 
    for (ii=1;ii<l-1;ii=ii+1)
      printf(" ");
    printf("*");
  }
  printf("\n");
  for (i=0; i<l; i=i+1)
    printf("*");}
  return 0;
 }
