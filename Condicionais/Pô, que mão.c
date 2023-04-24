#include <stdio.h>
int main() {
int N, X, Y, Z;
scanf("%d", &N);
scanf("%d", &X);
scanf("%d", &Y);
scanf("%d", &Z);
if (N >= (X+Y+Z)){
  printf("3");
}
else if ((N >= (X+Y)) || (N >= (X+Z)) || (N >= (Y + Z))) {
  printf("2");
}
else if ((N >= X) || (N >= Y) || (N >= Z) ) {
  printf("1");
}
else {
  printf("0");
}
return 0;
}
