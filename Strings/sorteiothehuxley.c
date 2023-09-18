#include <stdio.h>

//funcao de ordenacao
void ordemAlfabetica ( int quantidadeDeInscritos, char vetor[][10]) {
  char aux[10];
 int i, j, min;
   for( i=0; i < quantidadeDeInscritos; i++) {
        min = i;
        for(j= i+1; j< quantidadeDeInscritos; j ++) {
            if ( strcmp(vetor[j], vetor[min]) < 0) min = j;
        }
        strcpy (aux, vetor[i]);
        strcpy (vetor[i], vetor[min]);
        strcpy (vetor[min], aux);
    }
}

int main (void) {

    int QtdInscCarro=0, QtdInscMoto = 0, sorteadoCarro, sorteadoMoto;

    scanf("%d", &QtdInscCarro);
    
    char InscritosCarro[QtdInscCarro][10];

    for (int i = 0; i < QtdInscCarro; i++) {
        scanf(" %s", &InscritosCarro[i]);
    }

    //O mesmo para moto:
    scanf("%d", &QtdInscMoto);
    char InscritosMoto[QtdInscMoto][10];

    for (int i = 0; i < QtdInscMoto; i++) {
        scanf(" %s", &InscritosMoto[i]);
    }

    scanf("%d %d", &sorteadoCarro, &sorteadoMoto);

    //ordena��o alfab�tica
    ordemAlfabetica(QtdInscCarro, InscritosCarro);
    ordemAlfabetica(QtdInscMoto, InscritosMoto);

    //Determina vencedor
    if (strcmp(InscritosCarro[sorteadoCarro-1], InscritosMoto[sorteadoMoto-1]) == 0) {
        printf("Quem ganhou tudo hoje foi %s", InscritosCarro[sorteadoCarro-1]);
    }

    else {
        printf("Quem ganhou o carro foi: %s\n", InscritosCarro[sorteadoCarro-1]);
        printf("Quem ganhou a moto foi: %s\n", InscritosMoto[sorteadoMoto-1]);
    }

    return 0;
}