#include <stdio.h>
int main(void) {
  int linhas = 0, colunas = 0;
  scanf("%d %d", &linhas, &colunas);
  int matrizOriginal[linhas][colunas];
  int matrizTransposta[colunas][linhas];
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matrizOriginal[i][j]);
    }
  }
  for (int j = 0; j < colunas; j++) {
    for (int i = 0; i < linhas; i++) {
      printf("%d ", matrizOriginal[i][j]);
  }
  printf("\n");
  }
  return 0;
}