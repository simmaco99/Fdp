/*Si realizzi un programma che legga 3 interi da standard input ed applichi la funzione a 3 argomenti ordered swap(·,·,·) alle 3 variabili in cui sono stati memorizzati i 3 valori. I valori letti devono essere passati alla funzione nell’ordine in cui vengono acquisiti da tastiera.
Si implementi la funzione ordered swap, che scambia il contenuto delle 3 variabili di input in modo che la variabile corrispondente al primo argomento contenga l’intero minore, la seconda variabile contenga l’intero mediano e la terza contenga l’intero di valore maggiore.
Si stampi a video il contenuto delle 3 variabili all’uscita dall’esecuzione della funzione.
 */

#include <stdio.h>

void swap(int *A, int *B, int *C)
{
  int a,b,c,v[3];
  a=*A;
  b=*B;
  c=*C;
  v[0]=a;
  if (b>v[0]){
    v[0]=b;
    v[1]=a;}
  else v[1]=b;

  if (c<v[1])
    v[2]=c;
  else {
    if (c<v[0]){
      v[2]=v[1];
      v[1]=c;}
    else{
      v[2]=v[1];
      v[1]=v[0];
      v[0]=c;}}

  *A=v[2];
  *B=v[1];
  *C=v[0];
}
  int main()
  { int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    swap(&a,&b,&c);
    printf("%d\n%d\n%d\n ", a,b,c);
    return 0;
}

