#include <stdio.h>

int main(void) {
  int a, n, i=0;
  scanf ("%d %d", &a, &n);
  if (n <= 0) {
    printf("fui pedir comida mesmo\n");
  }
  else if (a == 0) {
    printf("0");
  }
  else {
  n = n * 60;
  while (1) {
    if (a % 13 == 0) {
      a = a - 60;}
    else if (a % 60 == 0) {
      a = a + 30; }
    i++;
    a++;
    if (a == 0) {
      printf("%d", i);
      break;}
    else if (i == n) {
      printf("fui pedir comida mesmo\n");
      break; }
  }
  }
  return 0;
}
