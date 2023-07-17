#include <stdio.h>

int main(void) {
  int x=0, n=0, d, divisor=2, frequencia;
  scanf("%d", &x);
  if (x <= 0) {
    printf("mostFrequent: %d, frequency: %d", -1, -1);
  }
  else {
    for (; x>=divisor ; divisor++) {
        frequencia = 0;
        for (; x % divisor == 0; x = x/divisor) {
            frequencia++;
         }
        if (frequencia > n) {
            n = frequencia;
            d = divisor;
        }
        else if (frequencia == n) { 
            if (divisor < d) {
            d = divisor;
         }
    }
  }
  printf("mostFrequent: %d, frequency: %d", d, n);
  }
  return 0;
}