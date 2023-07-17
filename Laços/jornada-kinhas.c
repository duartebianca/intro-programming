#include <stdio.h>
//funcao que verifica se um numero eh primo
int primo(int possivelprimo) {
    int divisores = 0;
    for (int divisor = 1; divisor <= possivelprimo; divisor++) {
        if (possivelprimo % divisor == 0) divisores++;
    }
    if (divisores == 2) return 1;
    else return 0;
}
//funcao que calcula o numero fatorial
int fat(int n) {
	int fatorial = 1;
	for (; n > 0; n--)
		fatorial = fatorial * n;
	return fatorial;
}

int main(void) {
    int distancia, tamanho, experiencia=0, andar = 1, valemoedas=0, paradaDistancia = 0;
    scanf("%d %d", &distancia, &tamanho);
    //Percorre todo o caminho
    while (distancia > 0) {
        for (int i = 0; i < tamanho && !paradaDistancia; i++) {
            if (distancia <= 0) paradaDistancia = 1;
            else {
            if (primo(i) == 1) {
                experiencia += i;
                printf("%d ", i);
            }
            if (i == 7) valemoedas ++;
            if (distancia <= 0) paradaDistancia = 1;
            distancia--;
            }
        }
    }
    //converte vale moedas em moedas (fatorial)
    if (valemoedas != 0) valemoedas = fat(valemoedas);
    printf("\nExperiencia = %d Moedas = %d\n", experiencia, valemoedas);
    if (valemoedas == 0) {//torre da prosperidade
        printf("Ja que nao achei moedas, vou na Torre\n");
        while (experiencia > 0) {
            if (andar % 7 == 0)  {
                valemoedas += 30;
                printf("%d ", andar);
                /*
                if (experiencia == 1) printf("\n");
                else printf(" ");
                */
            }
            andar++;
            experiencia--;
        }
        //verifica moedas conseguidas na torre
        if (valemoedas > 0) printf("\nConsegui %d moedas na Torre\n", valemoedas);
        else printf("Desisto.\n");
    }
    
    
    return 0;
}
