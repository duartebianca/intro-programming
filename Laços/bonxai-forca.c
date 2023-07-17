#include <string.h>
#include <math.h>
#include <stdio.h>
int main(void) {
  //declara??o de vari?veis
  int somatorio = 0, chute, somaChute=0, AcabouChance=0, flag=0, acertei = 0, contaPrimo = 0;
  char entrada[100];
  scanf(" %s", entrada);
  //Soma os caracteres da entrada
  for (int i = 0; i < strlen(entrada); i++) {
    somatorio += entrada[i];
  }
  //verifica se ? m?ltiplo de pelo menos 3 primos
  if (somatorio % 2 == 0 && somatorio != 2) contaPrimo += 1;
  for (int i = 3; i < sqrt(somatorio); i = i + 2) {
    if (somatorio % i == 0) contaPrimo += 1;
  }
  //se sim, multiplica por 3
  if (somatorio % 17 == 0)  printf("Agora estou Putin, Bonxai!\n");
  //verifica se ? m?ltiplo de 17
  else if (contaPrimo >= 3) somatorio *= 3;
    //calcula os chutes
    if (somatorio % 17 != 0) {
    for (int i = 1; (i <= 6 && flag != 1 && acertei != 1); i++) {
       scanf("%d", &chute);
       somaChute += chute;
      if (somaChute > somatorio) flag = 1;
      else {
        if (somaChute == somatorio) acertei = 1;
        else if (i == 6) AcabouChance = 1;
      }
    }
    }
    //sa?da:
    if (AcabouChance) printf("Bonxai foi de base.\n");
    else if (flag) printf("Agora voce passou dos limites!\n");
    else if (acertei) printf("Parabueins! Voce ajudou Bonxai a escapar.\n");
    
  return 0;
}