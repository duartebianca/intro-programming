#include <stdio.h>

int main (void) {

    int tamanhoVet=0, deslocamento=0, letra;
    scanf("%d", &tamanhoVet);
    char vetor[tamanhoVet];
    
    //recebe uma string
    for (int elemento = 0; elemento < tamanhoVet; elemento++) {
        scanf(" %c", &vetor[elemento] );
    }
    scanf("%d", &deslocamento);
    //Os caracteres serao minusculos
    // Vamos somar o deslocamento aos caracteres
    //Vamos estabelecer um intervalo. Se passar,
    //iremos recomecar o ciclo
    
    for (int elemento = 0; elemento < tamanhoVet; elemento++) {
            if (deslocamento >= 26) deslocamento %= 26;
            letra = vetor[elemento] + deslocamento;
            if (letra <= 122) vetor[elemento] += deslocamento;
            if (letra > 122) {  
            letra %= 122;
            if (letra < 97)  {
                letra+= 96;
                vetor[elemento] = letra;
            }
            else vetor[elemento] = letra;
        }
    }

    for (int elemento = 0; elemento < tamanhoVet; elemento++) {
        printf("%c", vetor[elemento]);
    }
    


    return 0;
}