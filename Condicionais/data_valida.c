#include <stdio.h>

int main() {
  int dia, mes, ano, parametro;
  scanf ("%d %d %d", &dia, &mes, &ano);
  if (mes == 2) {
  parametro = dia <= 28;
}
else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
  parametro = dia <= 30;
}
else {
  parametro = dia <= 31;
}
  if ((ano % 400 == 0) ||(ano% 4==0 && ano%100 != 0)) {
    if (mes == 2) {
  parametro = dia <= 29;
    }
    if ((dia >= 1 && (parametro) ) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100 ) ){
      printf ("valida");
    }
     else {
     printf ("invalida"); 
    }
  }
  else {
    if ((dia >= 1 && parametro) && (mes >= 1 && mes <= 12)&& (ano >= 1900 && ano <= 2100 )){
      printf ("valida");
    }
     else {
     printf ("invalida"); 
    }
  }

}
