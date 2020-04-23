//Scrivere un programma che legga da tastiera carattere alfabetico in minuscolo e stampi lo stesso carattere in maiuscolo.

#include <stdio.h>
int main(){
  char a;
  scanf("%c",&a);
  a=a-32;
  printf("%c\n",a);
  
  return 0;
}
