#include <stdio.h>
int main() {
char x, y, z;
scanf("%c %c %c",&x, &y, &z);
if (((x < 65) || (x > 90)) || ((y < 65) || (y > 90) || ((y < 65) || (y > 90)))) {
  printf("Etiquetas erradas!");
}
else if (( (x != 65) && (x != 69) && (x != 73) && (x != 79)  && (x != 85) ) && ( (y != 65) && (y != 69) && (y != 73) && (y != 79)  && (y != 85) ) && ( (z != 65) && (z != 69) && (z != 73) && (z != 79)  && (z != 85) ) && ((x + y + z == 3 * x + 3) ||(x + y + z == 3 * y + 3) || (x + y + z == 3 * z + 3)  )) {
  printf("Sequ�ncia perfeita.");

}
else if ((((x + y + z == 3 * x + 3) ||(x + y + z == 3 * y + 3) || (x + y + z == 3 * z + 3)  ))) {
  printf("Sequ�ncia quase perfeita.");

}
else if (( (x != 65) && (x != 69) && (x != 73) && (x != 79)  && (x != 85) ) && ( (y != 65) && (y != 69) && (y != 73) && (y != 79)  && (y != 85) ) && ( (z != 65) && (z != 69) && (z != 73) && (z != 79)  && (z != 85) ) && ((x + y + z == 3 * x + 6) ||(x + y + z == 3 * y + 6) || (x + y + z == 3 * z + 6)  )) {
  printf("Bissequ�ncia perfeita.");

}
else if ((((x + y + z == 3 * x + 6) ||(x + y + z == 3 * y + 6) || (x + y + z == 3 * z + 6)  ))) {
  printf("Bissequ�ncia quase perfeita.");

}
else if (( (x != 65) && (x != 69) && (x != 73) && (x != 79)  && (x != 85) ) && ( (y != 65) && (y != 69) && (y != 73) && (y != 79)  && (y != 85) ) && ( (z != 65) && (z != 69) && (z != 73) && (z != 79)  && (z != 85) ) && ((x + y + z == 3 * x + 9) ||(x + y + z == 3 * y + 9) || (x + y + z == 3 * z + 9)  )) {
  printf("Trissequ�ncia perfeita.");

}
else if ((((x + y + z == 3 * x + 9) ||(x + y + z == 3 * y + 9) || (x + y + z == 3 * z + 9)  ))) {
  printf("Trissequ�ncia quase perfeita.");

}

else {
  printf("S� umas letras ai...");
}
return 0;
}
