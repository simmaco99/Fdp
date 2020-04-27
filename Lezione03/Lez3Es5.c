//Scrivere un programma che legga da tastiera un numero e stabilisca se pari o meno, stampando in uscita rispettivamente 1 o 0.

#include <stdio.h>

int main(){
  int a;
  scanf("%d",&a);
  if (a%2==0)
         printf("1\n");
  else
    printf("0\n");                         

return 0;
}
