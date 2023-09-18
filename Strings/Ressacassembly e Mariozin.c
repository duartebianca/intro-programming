#include <stdio.h>

int main(void) {
   //quantidade de instru��es
  int qtdInstrucoes = 0; 
  scanf("%d", &qtdInstrucoes);
  char operacao[qtdInstrucoes][4], a[qtdInstrucoes][1000], b[qtdInstrucoes][1000], resultado[qtdInstrucoes][1000];
  for (int i = 0; i < qtdInstrucoes; i++) {
  //receba as instru��es
  scanf(" %[^ ]%*c %[^,]%*c %[^\n]%*c", operacao[i], a[i], b[i]);
  }
  //converte instru��es e imprime
  for (int i = 0; i < qtdInstrucoes; i++) {
  if (operacao[i][0] == 'm') {
    sprintf(resultado[i], "%s = %s", a[i], b[i]);
    printf("%s\n", resultado[i]);
  }
  else if (operacao[i][1] == 'd') {
    sprintf(resultado[i], "%s += %s",a[i], b[i]);
    printf("%s\n", resultado[i]);
  }
  else if (operacao[i][0] == 's'){
    sprintf(resultado[i], "%s -= %s", a[i], b[i]);
    printf("%s\n", resultado[i]);
  }
  else if (operacao[i][1] == 'n') {
    sprintf(resultado[i], "%s = %s & %s", a[i], a[i], b[i]);
    printf("%s\n", resultado[i]);
  }
  }
  return 0;
}