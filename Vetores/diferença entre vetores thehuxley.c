#include <stdio.h>

void OrdenaVetor(int vetor[], int tam) {
    int i, j, min, aux;
   for( i=0; i < tam; i++) {
        min = i;
        for(j= i+1; j< tam; j ++) {
            if (vetor[j] < vetor[min]) min = j;
        }
        aux=vetor[i];
        vetor[i]=vetor[min];
        vetor[min]=aux;
    }
}

int main (void) {

    int tam=0, x, contador=0;
    while (scanf("%d", &tam) != -1) {
        if (tam != -1) {
        contador = 0;

        int vetorOrdenado[tam], vetorOriginal[tam];
        scanf("%d", &x);

        for (int elemento = 0; elemento < tam; elemento++) {
            scanf("%d", &vetorOriginal[elemento]);
        }

        //fazer uma c�pia do vetor
        for (int elemento = 0; elemento < tam; elemento++) {
            vetorOrdenado[elemento] = vetorOriginal[elemento];
        }

        OrdenaVetor(vetorOrdenado, tam);
        /*
        printf("O vetor ordenado:\n");

         for (int elemento = 0; elemento < tam; elemento++) {
            printf("%d ", vetorOrdenado[elemento]);
        }
        printf("\n");

        printf("O vetor original:\n");
        for (int elemento = 0; elemento < tam; elemento++) {
            printf("%d ", vetorOriginal[elemento]);
        }
        printf("\n");
        */

        for (int elemento = 0; elemento < tam; elemento++) {
          if( abs (vetorOrdenado[elemento] - vetorOriginal[elemento]) == x) {
              contador ++;
          } 
        }

        printf("%d\n", contador);

        for (int elemento = 0; elemento < tam; elemento++) {
           // printf("Abs(vetorOrdenado[%d] - vetorOriginal[%d]) = %d\n", elemento, elemento, abs (vetorOrdenado[elemento] - vetorOriginal[elemento]));
          if( abs (vetorOrdenado[elemento] - vetorOriginal[elemento]) == x ) {
              printf("%d %d %d", vetorOriginal[elemento], vetorOrdenado[elemento], elemento+1);
             printf("\n");
          } 
        }
        }

    }

    return 0;
}