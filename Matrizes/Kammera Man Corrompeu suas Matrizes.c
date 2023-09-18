#include <stdio.h>
#include <math.h>
int main (void) {
  //vari�veis
  int linhas = 0, colunas = 0;
  scanf("%d %d", &linhas, &colunas);
  double matrizCorrompida [linhas][colunas];
  double expoente, base;
  //Coloca elementos na matriz
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%lf", &matrizCorrompida[i][j]);
    }
  }
  // Verificar se tem - 1 e substituir
   for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {

      if (matrizCorrompida[i][j] == -1) { //se um valor � igual a -1
      int jnovo = 0;
        while (jnovo < colunas) {
          if (( matrizCorrompida[i][jnovo] != -1 ) &&( matrizCorrompida[i][jnovo] != 1 ) ) {
            expoente = jnovo;
            break;
          }
          else {
          jnovo++;
          }
        }
        
      base = pow (matrizCorrompida[i][jnovo], 1/expoente);
      matrizCorrompida[i][j] = pow(base, j);
      }
      
    }
  }
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        if (j == colunas - 1) {
          printf("%.0lf", matrizCorrompida[i][j]);  
        }
        else {
            printf("%.0lf ", matrizCorrompida[i][j]);
        }
    }
    printf("\n");
  }
  return 0;
}