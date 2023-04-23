#include <stdio.h>
int main() {
int totalPrevisto, ID1, ID2, ID3, ID4, ID5, peso1, peso2, peso3, peso4, peso5, contador = 0, ponto;
scanf("%d %d", &ID1, &peso1);
scanf("%d %d", &ID2, &peso2);
scanf("%d %d", &ID3, &peso3);
scanf("%d %d", &ID4, &peso4);
scanf("%d %d", &ID5, &peso5);
scanf("%d", &totalPrevisto);
if ( (ID1 % 6 == 0) || (ID1 % 10 == 0) || (ID1 % 14 == 0) ) {
peso1 = peso1 * 2;
ponto = ID1 * peso1;
contador += ponto;
}
else if (ID1 % 34 == 0) {
  ponto = 0;
}
else if ( ((peso1 * ID1) % 2 != 0) && ( ((peso1 * ID1) % 11 == 0) || ((peso1 * ID1) % 13 == 0) || ((peso1 * ID1) % 17 == 0) || ((peso1 * ID1) % 19 == 0) ) ) {
ponto = (peso1 * ID1) / 2;
contador += ponto;
}
else {
ponto = peso1 * ID1;
contador += ponto;
}
if ( (ID2 % 6 == 0) || (ID2 % 10 == 0) || (ID2 % 14 == 0) ) {
peso2 = peso2 * 2;
ponto = ID2 * peso2;
contador += ponto;
}
else if (ID2 % 34 == 0) {
  ponto = 0;
}
else if ( ((peso2 * ID2) % 2 != 0) && ( ((peso2 * ID2) % 11 == 0) || ((peso2 * ID2) % 13 == 0) || ((peso2 * ID2) % 17 == 0) || ((peso2 * ID2) % 19 == 0) ) ) {
ponto = (peso2 * ID2) / 2;
contador += ponto;
}
else {
ponto = peso2 * ID2;
contador += ponto;
}
if ( (ID3 % 6 == 0) || (ID3 % 10 == 0) || (ID3 % 14 == 0) ) {
peso3 = peso3 * 2;
ponto = ID3 * peso3;
contador += ponto;
}
else if (ID3 % 34 == 0) {
  ponto = 0;
}
else if ( ((peso3 * ID3) % 2 != 0) && ( ((peso3 * ID3) % 11 == 0) || ((peso3 * ID3) % 13 == 0) || ((peso3 * ID3) % 17 == 0) || ((peso3 * ID3) % 19 == 0) ) ) {
ponto = (peso3 * ID3) / 2;
contador += ponto;
}
else {
ponto = peso3 * ID3;
contador += ponto;
}
if ( (ID4 % 6 == 0) || (ID4 % 10 == 0) || (ID4 % 14 == 0) ) {
peso4 = peso4 * 2;
ponto = ID4 * peso4;
contador += ponto;
}
else if (ID4 % 34 == 0) {
  ponto = 0;
}
else if ( ((peso4 * ID4) % 2 != 0) && ( ((peso4 * ID4) % 11 == 0) || ((peso4 * ID4) % 13 == 0) || ((peso4 * ID4) % 17 == 0) || ((peso4 * ID4) % 19 == 0) ) ) {
ponto = (peso4 * ID4) / 2;
contador += ponto;
}
else {
ponto = peso4 * ID4;
contador += ponto;
}
if ( (ID5 % 6 == 0) || (ID5 % 10 == 0) || (ID5 % 14 == 0) ) {
peso5 = peso5 * 2;
ponto = ID5 * peso5;
contador += ponto;
}
else if (ID5 % 34 == 0) {
  ponto = 0;
}
else if ( ((peso5 * ID5) % 2 != 0) && ( ((peso5 * ID5) % 11 == 0) || ((peso5 * ID5) % 13 == 0) || ((peso5 * ID5) % 17 == 0) || ((peso5 * ID5) % 19 == 0) ) ) {
ponto = (peso5 * ID5) / 2;
contador += ponto;
}
else {
ponto = peso5 * ID5;
contador += ponto;
}

if ((contador == totalPrevisto) && (ID1 != ID2 != ID3 != ID4 != ID5)) {
printf("barra limpa, khan");
}
else {
 printf("UEPAAA TEMOS UM RATINHO");
}
return 0;
}