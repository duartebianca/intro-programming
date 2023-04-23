#include <stdio.h>
int main() {
int tempo;
scanf("%d", &tempo);
if (tempo < 0) {
  printf("Meme man quebrou o tempo! De volta ao transito :(\n");
}
else if (tempo < 62) {
  printf("...Ainda no transito...\n");
}
else if ((tempo >= 3720) && (tempo<3744)) 
{
  printf ("Stonks has been born!\n");
}
else{
  printf("Lar doce lar\n");
}
return 0;
}