// 10: Peça o nome e o salário e mostre:

#include<stdio.h>

int main () {
  
  char nome[50];
  float salario;

  printf("Digite seu nome: ");
  scanf("%49s", &nome);

  printf("Digite seu salario: ");
  scanf("%f", &salario);

  printf("Nome: %s\n", nome);
  printf("Salario: %.2f\n", salario);


  
  return 0;
}