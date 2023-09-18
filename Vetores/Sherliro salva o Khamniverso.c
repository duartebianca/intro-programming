#include <stdio.h>

int main(void) {

    int tamanho, flag = 0;
    scanf("%d", &tamanho);
    int fibonacci[tamanho];
    int sequencia[tamanho];

    for (int i=0; i < tamanho-1; i++) {
        scanf("%d", &sequencia[i]);
    }

    if (tamanho >= 2) {
        fibonacci[0] = 1;
        fibonacci[1] = 1;
    }
    else if (tamanho <= 1) {
        fibonacci[0] = 1;
         printf("Sherliro achou o termo 1 que deveria estar na posicao 1");
    }
    
    if (tamanho == 2)printf("Sherliro achou o termo 1 que deveria estar na posicao 2");
    else {

    if (tamanho > 2) {
    for (int j = 2; j < tamanho; j++) {
        fibonacci[j] = fibonacci[j-1] + fibonacci[j-2];

    }
    }

     for (int i=0; i < tamanho; i++) {
        if (sequencia[i] != fibonacci[i] && flag != 1) {
            printf("Sherliro achou o termo %d que deveria estar na posicao %d", fibonacci[i], i+1);
            flag = 1;
        }
   }
    }

    return 0;
}