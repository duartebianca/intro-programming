#include <stdio.h>
#include <string.h>

int main () {

    char conjunto[30], palavraAtual[30];
    char eliminadas[30];
    int qtdPalavra, contador = 0, ehpossivel = 0;
    scanf(" %s", conjunto);
    scanf("%d", &qtdPalavra);

    for (int i = 0; i < qtdPalavra; i++) {
        scanf(" %s", palavraAtual);
        //para cada letra da palavra recebida
        for (int j = 0; j < strlen(palavraAtual); j++) {
            //verifica se a letra est� no conjunto
            for (int k = 0; k < strlen(conjunto); k++) {
               // printf("Sera %c e %c\n", palavraAtual[j], conjunto[k]);
                if (palavraAtual[j] == conjunto[k]) {
                   // printf("Comparamos %c e %c\n", palavraAtual[j], conjunto[k]);
                    ehpossivel ++;
                    break;
                   // printf("Foi possivel: %d\n", ehpossivel);
                   // printf("%d", strlen(palavraAtual));
                    //conjunto[k] = '-';
                    //printf("String Atual: %s\n", conjunto);
                }
            }
        }
        if (ehpossivel >= strlen(palavraAtual)) {
            contador++;
            for (int j = 0; j < strlen(palavraAtual); j++) {
            //verifica se a letra est� no conjunto
            for (int k = 0; k < strlen(conjunto); k++) {
                if (palavraAtual[j] == conjunto[k]) {
                    conjunto[k] = '-';
                    break;
                   // printf("String Atual: %s\n", conjunto);
                }
            }
        }
        }
        ehpossivel = 0;
    }
    printf("E possivel formar %d palavras com esse conjunto", contador);

    return 0;
}