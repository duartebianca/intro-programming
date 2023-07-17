#include <stdio.h>
int main(void) {
  int numero;
  int i = 0, maximo;
  do {
    scanf("%d", &numero);
    if (numero != 0) {
     while ( (i*i - (i-1)*(i-1)) != numero) {
        i++;
    }
    if ((i*i - (i-1)*(i-1)) == numero) {
      printf("%d - %d\n",i*i, (i-1)*(i-1));
    }
  }
  i = 0;
  } while (numero != 0);
  

  return 0;
}