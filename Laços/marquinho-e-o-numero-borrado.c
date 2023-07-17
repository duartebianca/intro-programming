#include <stdio.h>

//funcao que verifica se o numero eh primo
int primo(int i) {
    int divisores = 0;
    for (int b = 1; b <= i; b++) {
        if (i % b == 0) divisores++;
    }
    if (divisores == 2) return 1;
    else return 0;
}

int main()
{   int foiImpresso = 0;
    char d1, d4, d5, d6, d7, d8, d1aux, d4aux;
    //entrada dos d�gitos como caracteres
    scanf("%c__%c-%c%c%c%c", &d1, &d4, &d5, &d6, &d7, &d8);
    
    //salva caracteres para contas sem afetar originais
    d1aux = d1;
    d4aux = d4;
    //operar com os caracteres pela tabela ASCII
    d1aux = d1aux- 48;
    d4aux = d4aux - 48;
    
    /* Para numeros de 1 a 99, a divisao inteira entre 
    o numero e o digito 1 e entre o numero e o digito 4
    tem que dar um primo*/
    
    for (int numero = 1; numero <= 100; numero++ ) {
        if (primo(numero/d1aux) == 1 && primo(numero/d4aux) == 1) {
            if (numero < 10) {
              printf("%c0%d%c-%c%c%c%c", d1, numero, d4, d5, d6, d7, d8);
              printf("\n");
              foiImpresso++;
            }
            else {
            printf("%c%d%c-%c%c%c%c", d1, numero, d4, d5, d6, d7, d8);
            printf("\n");
            foiImpresso++;
            }
        }
    }
    
    if (foiImpresso == 0) {
        printf("Marquinhos esta louco!\n");
    }
    return 0;
}
