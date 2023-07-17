#include <stdio.h>


int main()
{   
  char limite, limiteInt, alfabeto = 'A';
  int caracteresPorLinha, qtdPontos, quantasLetras=0;
  scanf("%c", &limite);

  
  limiteInt = limite;
  limiteInt -= 64;
  caracteresPorLinha = 2 * limiteInt - 1;
    
  for (int linha = 1; linha <= limiteInt; linha++) { //quantidade de linhas impressas
    if (linha == 1) { //caso especial da primeira linha
      qtdPontos = caracteresPorLinha - 1;
      for (int ponto = 0; ponto < qtdPontos/2; ponto++) {
        printf(".");
      }
      printf("A");
      for (int ponto = 0; ponto < qtdPontos/2; ponto++) {
        printf(".");
      }
      printf("\n");
    }
    //AT� AQUI T� TUDO OK
    else {
      qtdPontos -= 2; //TB PARECE CERTINHA
      //O caos comeca aqui
      for (int ponto = 0; ponto < qtdPontos/2; ponto++) {
        printf(".");
      }

      //printar letras indo
      
      for (int letra = 1; letra <= linha; letra++) {//controla quantas letras s�o printadas
        printf("%c", alfabeto+letra-1);
      }

      //Printar voltando
      for (int letra = linha-1; letra > 0; letra--) {//controla quantas letras s�o printadas
        printf("%c", alfabeto+letra-1);
      }
      

      for (int ponto = 0; ponto < qtdPontos/2; ponto++) {
        printf(".");
      }
      printf("\n");
    }
  }
    return 0;
}
