// 8: Crie um programa que leia:
// um char (inicial do nome)
// uma float (altura)


#include<stdio.h>

int main () {
  
  char letra;
  float altura;

  printf("Digite a inicial do seu nome: ");
  scanf("%c", &letra);

  printf("Digite a sua Altura: ");
  scanf("%f", &altura);

  printf("letra: %c\n", letra);
  printf("Altura: %.2f\n", altura);
  
  return 0;
}