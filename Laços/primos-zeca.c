#include <math.h>
#include <stdio.h>

//fun��o para verificar se � primo
int primo(int i) {
    int divisores = 0;
    for (int b = 1; b <= i; b++) {
        if (i % b == 0) divisores++;
    }
    if (divisores == 2) return 1;
    else return 0;
}

int main(void) {

  int A, B, contador=0, indice=0;
  int vetorPrimos[1000];
  scanf("%d %d", &A, &B);
  
 //criar vetor com todos os primos dentro do limite
    for (int n = 3; n <= 2000; n++) {
        if (primo(n) == 1) {
            vetorPrimos[indice] = n;
            indice++;
        }
    }
    
    //verifica se � primo de Zeca
    for (int n = A; n <= B; n++) {
        for (int k = 0; k < indice; k++){
            if (vetorPrimos[k] == n) {
                if (vetorPrimos[k] == (vetorPrimos[k-1] + vetorPrimos[k+1])/2) {
                    contador++;
                }
            }
        }
    }
    
    
printf("%d\n", contador);
  
  return 0;
}
