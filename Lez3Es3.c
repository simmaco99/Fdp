//Scrivere un programma che legga da tastiera tre numeri (anche con virgola) e stampi in uscita la media, riportandola con tre cifre decimali.

#include <stdio.h>

int main(){
  float a,b,c,media;
  scanf("%f %f %f", &a, &b, &c );
  media=(a+b+c)/3;
  printf("%.3f \n",media);
 return 0;   
}
