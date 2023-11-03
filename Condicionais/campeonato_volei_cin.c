#include <stdio.h>
int main() {
int A, B, C, D, E, F, G, H;
scanf ("%d", &A);
scanf ("%d", &B);
scanf ("%d", &C);
scanf ("%d", &D);
scanf ("%d", &E);
scanf ("%d", &F);
scanf ("%d", &G);
scanf ("%d", &H);

if ( ( (A == B) || (A == D) || (A == F) || (A == H) ) && (B != A) && (B != D) && ( (H == G) || (H == F) ) ) {

  if (G == H) {
      if (D == C){
        if (F != A) {
          printf("Conseguimos times suficientes!\n");
        }
        else {
          printf ("Alguem nao esta satisfeito...\n");
        }
      }
      else {
        printf ("Alguem nao esta satisfeito...\n");
      }
  }
  else {
    if ( C == E){
      if (F == A) {
        printf("Conseguimos times suficientes!\n");
      }
      else {
        printf ("Alguem nao esta satisfeito...\n");
      }
    }
    else {
      if ( F != A) {
        printf("Conseguimos times suficientes!\n");
      }
      else {
        printf ("Alguem nao esta satisfeito...\n");
      }
    }
  }
}
else {
printf ("Alguem nao esta satisfeito...\n");
}
}
