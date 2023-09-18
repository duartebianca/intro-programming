#include <stdio.h>
int main (void) {
  int ordem = 0;
  scanf("%d", &ordem);
  if (ordem == 0) {
    printf("Vazia");
  }
  else {
  int matriz1[ordem][ordem], matriz2[ordem][ordem], matrizR[ordem][ordem];

  //Coloca elementos na matriz 1
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }
  //Coloca elementos na matriz 2
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }
  //realiza a soma
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      matrizR[i][j] = matriz1[i][j] + matriz2[i][j];
      printf("%d\n", matrizR[i][j]);
    } 
  }
  }
  return 0;
}