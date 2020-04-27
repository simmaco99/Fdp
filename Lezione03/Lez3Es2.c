//Scrivere un programma che legga da tastiera un valore di temperatura (anche decimale) espresso in gradi Celsius e ne stampi la conversione in gradi Fahrenheit usando due cifre decimali.

#include <stdio.h>

  int main()
  {
    float C,F;
    scanf ("%f", &C);
    F=(C*1.8)+32;
    printf ("%.2f\n",F);
    return 0;
}
