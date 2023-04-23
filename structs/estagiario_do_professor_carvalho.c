#include <stdio.h>

typedef struct {
    char nome[21];
    char tipo[3];
    int ataque, defesa;
} TipoPokemon;


int main() {

    int qtd_pokemon, pokemon=1;
    char instrucao[9], type[5];
    scanf("%d", &qtd_pokemon);

    TipoPokemon pokemons[qtd_pokemon], pokemon1, pokemon2;

    for (int p = 0; p < qtd_pokemon; p++) {
        //Armazenar informacoes de cada pokemon
        scanf(" %20[^\n]", pokemons[p].nome);
        scanf(" %3[^\n]", pokemons[p].tipo);
        scanf("%d", &pokemons[p].ataque);
        scanf("%d", &pokemons[p].defesa);
    }

    do {
        //Luta
        if (strncmp(instrucao, "luta", 4) == 0) {
            scanf(" %s vs %s", pokemon1.nome, pokemon2.nome);
            for (int p = 0; p < qtd_pokemon; p++) {
                 if(strcmp(pokemon1.nome, pokemons[p].nome) == 0){
                    strcpy(pokemon1.tipo, pokemons[p].tipo);
                    pokemon1.defesa = pokemons[p].defesa;
                    pokemon1.ataque = pokemons[p].ataque;
                }
                    else if(strcmp(pokemon2.nome, pokemons[p].nome) == 0){
                    strcpy(pokemon2.tipo, pokemons[p].tipo);
                    pokemon2.defesa = pokemons[p].defesa;
                    pokemon2.ataque = pokemons[p].ataque;
                }
            }
            if ((pokemon1.ataque - pokemon2.defesa) == (pokemon2.ataque - pokemon1.defesa)) 
                printf("parece que temos um empate\n");
            else if(pokemon1.ataque - pokemon2.defesa > pokemon2.ataque - pokemon1.defesa)
                printf("%s deitou %s na porrada\n", pokemon1.nome, pokemon2.nome);
            else
                printf("%s deitou %s na porrada\n", pokemon2.nome, pokemon1.nome);
        }


        //Lista
        if (strncmp(instrucao, "list", 4) == 0) {
            memcpy(type, &instrucao[5], 4);
            pokemon=1;
            for(int n = 0; n < qtd_pokemon; n++){
                if(strncmp(type, pokemons[n].tipo, 3) == 0){
                    printf("Pokemon %d: %s\n", pokemon, pokemons[n].nome);
                    pokemon++;
                    printf(" Ataque: %d\n Defesa: %d\n", pokemons[n].ataque, pokemons[n].defesa);
                }
            }
        }

    } while( ( scanf(" %8[^\n]", instrucao ) ) && ( strcmp(instrucao, "0") != 0) );


    


    return 0;
}
