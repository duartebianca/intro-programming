#include <stdio.h>
#include <string.h>
typedef struct {
    char nome_clube[16];
    float valor, pontos;
    int qtd_jogadores, qtd_titulos;
    char tem_neymar[4], flamengo_2019[4];
} Dados;

int main() {
    int qtd_clubes;
    scanf("%d", &qtd_clubes);
    Dados clube[qtd_clubes];


    for (int c=0; c < qtd_clubes; c++) {
         //leitura de dados
        scanf(" %15[^\n]", clube[c].nome_clube);
        scanf("%f", &clube[c].valor);
        scanf("%d", &clube[c].qtd_jogadores);
        scanf("%d", &clube[c].qtd_titulos);
        scanf(" %s", clube[c].tem_neymar);
        scanf(" %s", clube[c].flamengo_2019);
        //recebe valor
        clube[c].pontos = clube[c].valor;
        //cada jogador rende 100 pts
        clube[c].pontos += (100 * clube[c].qtd_jogadores);
        //cada titulo vale 2.000 pontos
        clube[c].pontos += (2000 * clube[c].qtd_titulos);
        //se tiver neymar, soma 10.000 pontos
        if (strcmp(clube[c].tem_neymar, "sim") == 0) {
            clube[c].pontos += 10000;
        }
        //se tiver flamengo, vale 20.000 pontos
        //se tiver neymar, soma 10.000 pontos
        if (strcmp(clube[c].flamengo_2019, "sim") == 0) {
            clube[c].pontos += 20000;
        }
    }

    //ranking
    int i, j, min;
    Dados aux;
    for( i=0; i < qtd_clubes; i++) {
        min = i;
        for(j= i+1; j< qtd_clubes; j ++) {
            if (clube[j].pontos < clube[min].pontos) min = j;
        }
        aux=clube[i];
        clube[i]=clube[min];
        clube[min]=aux;
    }

    //Imprime clubes e pontuacao
   for (int c = qtd_clubes-1; c >= 0; c--) {
       printf("%s %.2f\n", clube[c].nome_clube, clube[c].pontos);
   }

    return 0;
}
