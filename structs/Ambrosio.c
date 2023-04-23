#include <stdio.h>
typedef struct {
    int numPassagem;
    int dia;
    int mes;
    int ano;
    char de[100];
    char para[100];
    int horas;
    int minutos;
    int poltrona;
    int idade;
    char nome_passageiro[100];
} Bilhete;


int main () {
    int i = 0, soma = 0;
    Bilhete Passageiro[44];

    while (scanf("%d", &Passageiro[i].numPassagem) != -1) {
    scanf("%d/%d/%d", &Passageiro[i].dia, &Passageiro[i].mes, &Passageiro[i].ano);
    scanf(" %99[^\n]%*c", Passageiro[i].de);
    scanf(" %99[^\n]%*c", Passageiro[i].para);
    scanf("%d:%d", &Passageiro[i].horas, &Passageiro[i].minutos);
    scanf("%d", &Passageiro[i].poltrona);  
    scanf("%d", &Passageiro[i].idade);
    soma += Passageiro[i].idade;
    scanf(" %99[^\n]%*c", Passageiro[i].nome_passageiro);
    i++;
    }
  
    int media = soma / (i);

    for (int j = 0; j < i; j++) {
        if ( (Passageiro[j].idade > media) &&  (Passageiro[j].poltrona % 2 == 0) ) {
            printf("%s\n", Passageiro[j].nome_passageiro);
        }
    }

    return 0;
}
