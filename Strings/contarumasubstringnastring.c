#include <stdio.h>
#include <string.h>
int main(void) {
  char parteString1[1000];
  int contador = 0, tamanho = 0;
  char string1[1000], string2[1000];
  scanf("%[^\n]%*c", string1);
  scanf("%[^\n]%*c", string2);
  tamanho = strlen(string2);
  int tamanho2 = strlen (string1);
  //copiar parte da string
  for (int n = 0; n < tamanho2; n++) {
    int final = tamanho2 - n;
    memcpy (parteString1, &string1[n], final);
    if (strncmp(parteString1, string2, tamanho) == 0) {
      contador += 1;
    }
  }
  printf("%d", contador);
  return 0;
}