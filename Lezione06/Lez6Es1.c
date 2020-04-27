//Si realizzi un programma C che contenga una funzione diff abs che prenda come parametri 2 float (a e b) e la cui esecuzione faccia si che la variabile corrispondente al primo argomento contenga il valore di a − b, mentre la variabile corrispondente al secondo argomento contenga b − a. Si stampi a video il contenuto delle 2 variabili all’uscita dall’esecuzione della funzione, con precisione alla seconda cifra decimale.

#include <stdio.h>

void  diff_abs(float *a, float *b)
{
  float c=0;
  c=*a-*b;
  *a=c;
  *b=-c;
}

int main()
{

  float a,b;

  scanf("%f %f", &a, &b);
  diff_abs(&a,&b);
  printf("%.2f \n %.2f \n", a, b);
  return 0;
}


