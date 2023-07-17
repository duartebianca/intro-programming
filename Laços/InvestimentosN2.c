#include <stdio.h>

int main(void) {
  int A, C;
  scanf ("%d %d", &A, &C);
  if (30 % (A+1) != 0) {
      printf("Pedro se cagou todo e foi pego.");
    }
  else {
    for (int i = 1; i <= C; i++) {
     if (30 % (A+1) == 0) {
        printf("Curvou\n");
        A++;
      }
      else {
      printf("Pedro se cagou todo e foi pego.");
      break;
      }

    }
  }
}