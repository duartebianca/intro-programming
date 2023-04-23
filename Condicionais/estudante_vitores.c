#include <stdio.h>
#include <math.h>
int main(void) {

  int A, B, C, contador=0;
  scanf("%d %d %d", &A, &B, &C);

  if (A * A == C) {
    contador++;
    printf("Quadrado Vitoris\n");
  }
  if (A % B == C) {
    if (contador == 0) printf("Resto Vitoris\n");
    else printf ("tambem Resto\n");
    contador++;
  }
  if (A * B == C) {
    if (contador == 0) printf("Multi Vitoris\n");
    else printf ("tambem Multi\n");
    contador++;
  }
  if (A / B == C) {
    if (contador == 0) printf("Div Vitoris\n");
    else printf ("tambem Div");
    contador++;
  }
  if (A + B == C) {
    if (contador == 0) printf("Soma Vitoris\n");
    else printf ("tambem Soma\n");
    contador++;
  }
  if (A - B == C) {
    if (contador == 0) printf("Sub Vitoris\n");
    else printf ("tambem Sub\n");
    contador++;
  }
  if (contador == 0) {
      printf("Impossivel vitores");
  }

  return 0;
}
