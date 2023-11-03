#include <stdio.h>
int main() {
int N, M, sobrou, divida;
scanf("%d %d", &N, &M);
if (N<M) {
  printf("Pedro vai ter que fugir\n");
}
else if (M % 100 == 0) {
  sobrou = N - M;
  printf("Esta pago\nSobrou %d\n", sobrou);
}
else {
  if (M < 100) {
    if (N>= 100) {
      sobrou = N - 100;
      printf("Pegou mais\nEsta pago\nSobrou %d\n", sobrou);
    }
    else {
      printf("Pedro vai ter que fugir\n");
    }
  }
  else if (N == M) {
    printf("Pedro vai ter que fugir\n");
  }
  else {
  divida = ((M/100) + 1) * 100;
  sobrou = N - divida;
    if (sobrou < 0) {
      printf("Pedro vai ter que fugir\n");
    }
    else {
       printf("Pegou mais\nEsta pago\nSobrou %d\n", sobrou);
    }
 }
}
return 0;
}
