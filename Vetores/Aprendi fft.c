#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void) {
        int indice1 = 0, indice2 = 0, grau1=0, grau2=0, n = 0, contador=0;
    while (scanf("%d %d", &grau1, &grau2) != EOF) {
        int polinomio1[grau1+1], polinomio2[grau2+1], polinomioSaida[grau1+grau2+1];

        for (int b = 0; b < (grau1+grau2+1); b++) polinomioSaida[b] = 0;
        //preenche os vetores
        for (indice1 = 0; indice1 < grau1+1; indice1++) {
            scanf("%d", &polinomio1[indice1]);
        }

        for (indice2 = 0; indice2 < grau2+1; indice2++) {
            scanf("%d", &polinomio2[indice2]);
        }
        
        /*realiza a distributiva
        laco mais externo: polinomio 1. Mais interno: polinomio 2
        A posicao do polinomio 3 eh i + j */

        for (int i = 0; i < grau1+1; i++) { //Para cada elemento de polinomio 1

            for (int j = 0; j < grau2+1; j++) { //Multiplicaremos por um de polinomio 2
                n = j + i;
                polinomioSaida[n] +=  polinomio1[i] * polinomio2[j];
            }
        }
        contador++;
        printf("Caso #%d: ", contador);
        for (int m = 0; m < (grau1+grau2+1); m++) {
            if (m != grau1+grau2) printf("%d ", polinomioSaida[m]);
            else printf("%d", polinomioSaida[m]);
        }
        printf("\n");

    }

return 0;
}