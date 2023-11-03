#include <stdio.h>
int main(void) {
  int total, x, y, z, idade1, idade2, idade3, sobrou = 0, z0, y0, x0, grana_rebeka=3, idade1n, idade2n, idade3n;
  char letra1, letra2, letra3;
  scanf("%d", &total);
  scanf("%d %d %d", &x, &y, &z);
  //verificar se as porcentagens resultaram em inteiros
  x0 = x;
  y0 = y;
  z0 = z;
  x *= total;
  y *= total;
  z *= total;
  if (x % 100 == 0 && y % 100 == 0 && z % 100 == 0) {
    x = x/100;
    y = y/100;
    z = z/100;
    sobrou = total - x - y - z;
    grana_rebeka += sobrou;
    printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", x, y, z);
  } 
  else {
  total += 1;
  grana_rebeka -=1;
  x = x0 * total;
  y = y0 * total;
  z = z0 * total;
  if (x % 100 == 0 && y % 100 == 0 && z % 100 == 0) {
    x = x/100;
    y = y/100;
    z = z/100;
    sobrou = total - x - y - z;
    if (sobrou >= 2) {
      grana_rebeka += sobrou;
      printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", x, y, z);
    }
    else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
  }
  else {
  total += 1;
  grana_rebeka -=1;
  x = x0 * total;
  y = y0 * total;
  z = z0 * total;
  if (x % 100 == 0 && y % 100 == 0 && z % 100 == 0) {
    x = x/100;
    y = y/100;
    z = z/100;
    sobrou = total - x - y - z;
    scanf(" %c %c %c", &letra1, &letra2, &letra3);
    letra1 = letra1 - 96;
    letra2 = letra2 - 96;
    letra3 = letra3 - 96;
    if (sobrou >= 3) {
      grana_rebeka += sobrou;
      printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", x, y, z);
    }
    else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
    printf("%d\n", letra1+letra2+letra3);
  }
  else {
  total += 1;
  grana_rebeka -=1;
  x = x0 * total;
  y = y0 * total;
  z = z0 * total;
  if (x % 100 == 0 && y % 100 == 0 && z % 100 == 0) {
    x = x/100;
    y = y/100;
    z = z/100;
    sobrou = total - x - y - z;
    scanf("%d %d %d", &idade1, &idade2, &idade3);
    if (sobrou >= 4) {
      grana_rebeka += sobrou;
      printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", x, y, z);
      if (idade1 % 3 == 0 || idade2%3== 0 || idade3%3== 0) {
      if (idade1%3==0) idade1n = idade1/3;
      if (idade2%3==0) idade2n = idade2/3;
      if (idade3%3==0) idade3n = idade3/3;
      if ( (idade1 % 3 == 0) && (idade2 % 3 == 0) && (idade3 % 3 == 0)) printf("%d\n", idade1n+idade2n+idade3n);
      else if ( (idade1 % 3 == 0) && (idade2 % 3 == 0)) {
        printf("%d\n", idade1n+idade2n);
      }
      else if ((idade2 % 3 == 0) && (idade3 % 3 == 0)) {
        printf("%d\n", idade2n+idade3n);
      }
      else if ( (idade1 % 3 == 0) && (idade3 % 3 == 0)) {
        printf("%d\n", idade1n+idade3n);
      }
    }
    }
    else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
  }
  else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
  }
  }
  }
//dinheiro pra casa?
  if (grana_rebeka >= 7) printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
  else printf("E parece que Rebeka vai ter que voltar andando...\n");
  return 0;
}