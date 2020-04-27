// Approssima la radice quadrata con il metodo babilonese, stampa il risultato con 4 cifre decimanli

#include <stdio.h>
float approx_sqrt(int z){
  float ris;
 if (z>0){
    ris=approx_sqrt(z-1)/2 +(z)/approx_sqrt(z-1)/2;}
if (z==0)
   ris=1;
 return ris;
}

int main(){
  int z;
  scanf("%d",&z);
  printf("%.4f",approx_sqrt(z));
  return 0;
}
