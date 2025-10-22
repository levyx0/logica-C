// 3: Crie duas variáveis a = 5 e b = 10.
// Faça a troca de valores entre elas e mostre o resultado:

#include<stdio.h>

int main() {
  int a = 5;
  int b = 10;
  int temp;

  // troca de valores

  temp = a;
  a = b;
  b = temp;

  printf(" Valor de a: %d\n", a);
  printf(" Valor de b: %d\n", b);
  

  return 0;
}
