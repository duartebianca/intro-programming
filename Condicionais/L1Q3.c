#include <stdio.h>
int main(void) {
  int M, A, B, C, D;
  int custoVerde, custoVermelho, custoRoxo, custoAmarelo;
  //moedas:
  scanf("%d\n", &M);
  //Pre�os
  scanf("%d %d %d %d", &A, &B, &C, &D);
  custoVerde =80/A; 
  custoVermelho = 100/B;
  custoRoxo = 120/C;
  custoAmarelo = 80/D;
  if (custoVerde >= custoVermelho && custoVerde >= custoRoxo && custoVerde >= custoAmarelo && A <= M) {
    printf("Verde\n");
  }
  else if (custoVermelho >= custoVerde && custoVermelho >= custoRoxo && custoVermelho >= custoAmarelo && B <= M) {
    printf("Vermelho\n");
  }
  else if (custoRoxo >= custoVerde && custoVermelho <= custoRoxo && custoRoxo >= custoAmarelo && C <= M) {
    printf("Roxo\n");
  }
  else if ( custoAmarelo >= custoVermelho && custoAmarelo >= custoRoxo && custoVerde <= custoAmarelo && D <= M) {
    printf("Amarelo\n");
  }
  else printf("Acho que vou a pe :(\n");
  return 0;
}