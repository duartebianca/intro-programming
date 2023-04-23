#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    float temperatura;
    char detectei;

} Unidade;

int main () {
    int qtdTestes=0, qtdSprinklers=0;
    float media=0;
    scanf("%d", &qtdTestes);

    //Para cada caso teste
    for (int teste = 0; teste < qtdTestes; teste++) {
        printf("TESTE %d\n", teste+1);
        scanf("%d", &qtdSprinklers);
        Unidade sprinkler[qtdSprinklers];
        //Para cada sprinkler
        for (int sAtual=0; sAtual < qtdSprinklers; sAtual++) {
            scanf("%d", &sprinkler[sAtual].id);
            scanf("%f", &sprinkler[sAtual].temperatura);
            media += sprinkler[sAtual].temperatura;
            scanf(" %c", &sprinkler[sAtual].detectei);    
        }
        media = media / qtdSprinklers;
        for (int sAtual=0; sAtual < qtdSprinklers; sAtual++) {
            if ( (sprinkler[sAtual].detectei == 'S') || (sprinkler[sAtual].temperatura >= 40) || (sprinkler[sAtual].temperatura > (1.15 * media) ) )  {
                printf("%d\n", sprinkler[sAtual].id);
            }  
        }
    }
    return 0;
}
