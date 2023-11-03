#include <stdio.h>
#include <math.h>
int main(void) {
  int x, y;
  int a, m, b, n;
  scanf("(%d, %d)", &x, &y); 
  scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);
  if ( (a * pow(x, n) - b * pow (y, m)) != 0 ) {
    printf("a fun��o est� definida em (%d,%d)", x, y);
  }
  else {
    printf("a fun��o n�o est� definida em (%d,%d) .-.", x, y);
  }
  
  return 0;
}