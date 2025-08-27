/*.Faça um programa que leia o saldo de uma conta poupança e imprima o novo saldo,
considerando um reajuste de 2%

1 Ler o saldo
2 Adcionar reajuste de 2%
3 Iprimir o novo saldo*/

#include<stdio.h>

int main () {

  float saldo;
  float resultado;

  scanf("%f", &saldo);

  resultado = saldo + ((2.0 / 100.0) * saldo);

  printf("\n%f", resultado);

  return 0;
}