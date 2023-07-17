#include <stdio.h>

int main(void) {
    char x, y, z, auX, auY, auZ;
    int pessoa;
    int conjuntosPessoas, limitemovimentos, x0=0, y0=0, z0=0, movimentos=0;
    scanf("%d %d", &conjuntosPessoas, &limitemovimentos);
    //coleta os quartos de 4*Pessoas
    //la�o que repete para cada uma das 4*pessoas
    for (pessoa = 0; ((pessoa < 4 * conjuntosPessoas) && limitemovimentos >= 0); pessoa++) {

        //recebe 3 caracteres para onde a pessoa mora
        scanf(" %c%c%c", &x, &y, &z);
        //tabela ascii
        x = x - 48;
        y = y - 48;
        z = z - 48;
    
        //Em x
        if (x > x0) {       
             for (int Xatual = x0; Xatual < x; Xatual++) {
                limitemovimentos --;
                movimentos++;
                printf("d");
            }
        }
            if (x < x0) {
                for (int Xatual = x0; Xatual > x; Xatual--) {
                limitemovimentos --;
                movimentos++;
                printf("e");
            }
            }
            //Em y
            if (y > y0) {  
                for (int Yatual = y0; Yatual < y; Yatual++) {
                limitemovimentos --;
                movimentos++;
                printf("c");
                }     
             
             }
            if (y < y0) {
                 for (int Yatual = y0; Yatual > y; Yatual--) {
                limitemovimentos --;
                movimentos++;
                printf("b");
                }
            }
            //Em z
            if (z> z0) {  
                for (int Zatual = z0; Zatual < z; Zatual++) {
                limitemovimentos --;
                movimentos++;
                printf("f");
                }     
             
             }
            if (z < z0) {
                 for (int Zatual = z0; Zatual > z; Zatual--) {
                limitemovimentos --;
                movimentos++;
                printf("t");
                }
            }
            printf("\n");
            printf("Entregue %d no quarto %d%d%d com %d movimentos\n", pessoa+1, x, y, z, movimentos);
            x0 = x;
            y0 = y;
            z0 = z;
            
    }

    //Yee tem que testar o limite de movimentos
    if (limitemovimentos >= 0) printf("Todas as pessoas foram entregues.\n");
    else printf("Faltou combustivel e foram entregues %d pessoas.\n", pessoa);
    printf("Fim do teste. Obrigado Kanye West!");
    return 0;
    
    
    
}