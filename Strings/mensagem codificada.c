#include <stdio.h>
#include <string.h>
int main (void) {
  //declaracao da string inicial
char codificado[1000];
scanf("%[^\n]%*c", 
codificado);
//verifica e substitui os caracteres
for (int caracter = 0; caracter < strlen(codificado); caracter++) {
  if ( (caracter == 0) || (codificado[caracter-2] == '.') ) {
     if (codificado[caracter] == '4') {
      codificado[caracter] = 'A';
    }
    else if (codificado[caracter] == '5') {
      codificado[caracter] = 'E';
    }
    else if (codificado[caracter] == '1') {
      codificado[caracter] = 'I';
    }
    else if (codificado[caracter] == '0') {
      codificado[caracter] = 'O';
    }
    else if (codificado[caracter] == '2') {
      codificado[caracter] = 'U';
    }
    else if ( codificado[caracter]>= 'a') {
        codificado[caracter] = codificado[caracter] - 32;
    }
  }
  else {
    if (codificado[caracter] == '4') {
      codificado[caracter] = 'a';
    }
    else if (codificado[caracter] == '5') {
      codificado[caracter] = 'e';
    }
    else if (codificado[caracter] == '1') {
      codificado[caracter] = 'i';
    }
    else if (codificado[caracter] == '0') {
      codificado[caracter] = 'o';
    }
    else if (codificado[caracter] == '2') {
      codificado[caracter] = 'u';
    }
  }
}
//exibe a string descodificada na tela
printf("%s",codificado );
return 0;

}