//Scrivere un programma che legga da tastiera un numero intero n con n ≥ 0 e stampi i valori della successione di Fibonacci, uno per riga, fino al primo valore della successione strettamente maggiore di n (questo valore non va stampato).

#include <stdio.h>

int main(){
    int f0=0,f1=1,f2=1,n;
    scanf("%d",&n);
    printf("0");

while (n>=f2) {
        printf("\n");
        printf("%d",f2);
        f2=f0+f1;
        f0=f1;
        f1=f2;
}
  return 0;
}
