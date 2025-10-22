#include<stdio.h>

int main () {
 
  char nome[50] = "Marcos levy";
  int idade = 25;
  float altura = 1.82;

  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Altura: %.2f\n", altura);
 
  return 0;
}