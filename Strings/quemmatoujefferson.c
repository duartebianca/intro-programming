#include <stdio.h>
#include <string.h>

int main () {

    int qtdSuspeitos, indiceCulpado, maior=0, culpaMultipla=0, naoResolveu = 0;
    int *bateu;
    scanf("%d", &qtdSuspeitos);

    char Fragmentos[3][11], Suspeitos[qtdSuspeitos][21], DNA[qtdSuspeitos][51];
    int qtdCompativeis[qtdSuspeitos];
    int SomaTam[qtdSuspeitos];
    //Inicializa os dois vetores com 0
    for (int i = 0; i < qtdSuspeitos; i++) {
        qtdCompativeis[i] = 0;
        SomaTam[i] = 0;
    
    }

    for (int i = 0; i < 3; i++) 
        scanf(" %s", Fragmentos[i]);

    for (int i = 0; i < qtdSuspeitos; i++) {
        //recebe os nomes e os DNA
        scanf("%s - %s", Suspeitos[i],  DNA[i]);
        //procura se o trecho de DNA bate com o fragmento
        for (int fragmento=0; fragmento < 3; fragmento++) {
        bateu = strstr(DNA[i], Fragmentos[fragmento]);
        if (bateu) {
            qtdCompativeis[i]++;
        }
        }
    }
    /*
    for (int i = 0; i < qtdSuspeitos; i++) {
        printf("Quantidade de Fragmentos compat�veis[%d] = %d\n", i, qtdCompativeis[i]);
    }
    */

    //Descobre quem possui mais fragmentos
    for (int suspeito = 0; suspeito < qtdSuspeitos; suspeito++) {
    if (suspeito == 0) {
        maior = qtdCompativeis[suspeito];
        indiceCulpado = suspeito;
    }
    if (qtdCompativeis[suspeito] > maior) {
        maior = qtdCompativeis[suspeito];
        indiceCulpado = suspeito;
    }
}

    for (int suspeito = 0; suspeito < qtdSuspeitos; suspeito++) {
        if ((indiceCulpado != suspeito) && (maior == qtdCompativeis[suspeito])) culpaMultipla = 1; 
    }

    if (culpaMultipla == 0) printf("X reponsavel por essa atrocidade foi %s!\n", Suspeitos[indiceCulpado]);
    else {
        for (int suspeito = 0; suspeito < qtdSuspeitos; suspeito++) {
            for (int fragmento = 0; fragmento < 3; fragmento++)  {
                bateu = strstr(DNA[suspeito], Fragmentos[fragmento]);
                if (bateu) SomaTam[suspeito] += strlen(Fragmentos[fragmento]);
            }
        }

        for (int suspeito = 0; suspeito < qtdSuspeitos; suspeito++) {
            if (suspeito == 0) {
                maior = SomaTam[suspeito];
                indiceCulpado = suspeito;
             }
            if (SomaTam[suspeito] > maior) {
                 maior = SomaTam[suspeito];
                indiceCulpado = suspeito;
            }
        }

       for (int suspeito = 0; suspeito < qtdSuspeitos; suspeito++) {
            if ((indiceCulpado != suspeito) && (maior== SomaTam[suspeito])) {
                printf("Nao pegamos x pilantra desse vez...\n");
                naoResolveu = 1;
            }
        }
        
    }

    if (naoResolveu == 0 && culpaMultipla == 1) printf("X reponsavel por essa atrocidade foi %s!\n", Suspeitos[indiceCulpado]); 

    return 0;
}