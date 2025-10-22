// 6: Peça para o usuário digitar sua idade e mostre

#include<stdio.h>

int main () {
  
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Sua idade e %d anos.\n", idade);
  
  return 0;
}