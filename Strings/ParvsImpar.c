#include <stdio.h>
#include <string.h>

void PreencheMatriz (int tam, char matriz[][tam][31]) {
     for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf(" %s", matriz[i][j]);
        }
    }
}

int main() {

    int tam, pontuacaoImpar=0, pontuacaoPar=0;
    scanf("%d", &tam);

    //matriz quadrada de palavras at? 30 caracteres
    char matriz[tam][tam][31];

    //recebe valores da matriz
   PreencheMatriz(tam, matriz);

    //para o time par
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            for (int n = 0; n < strlen(matriz[i][j]); n++) {
                if ( (n % 2 == 0) && ( (i+j) % 2 == 0) ) {
                    pontuacaoPar += matriz[i][j][n];
                }
            }
        }
    }

    //Para o time impar
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            for (int n = 0; n < strlen(matriz[i][j]); n++) {
                if ( (n % 2 != 0) && ( (i+j) % 2 != 0) ) {
                    pontuacaoImpar += matriz[i][j][n];
                }
            }
        }
    }
    

    if (pontuacaoImpar > pontuacaoPar) printf("Os impares venceram com %d pontos!\n", pontuacaoImpar);
    else if (pontuacaoImpar < pontuacaoPar) printf("Os pares venceram com %d pontos!\n", pontuacaoPar);
    else printf("Tivemos um empate em %d pontos!", pontuacaoImpar);


    return 0;
}