#include<stdio.h>

int main () {
  
  int i;
  int numeros[5] = {10, 20, 30, 40, 50};

  for (i = 0; i < 5; i++) {
      printf("Posicao %d: %d\n", i, numeros[i]);
  }
  return 0;
}
