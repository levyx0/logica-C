// 9: Peça ao usuário o ano de nascimento e ano atual, e calcule a idade:

#include<stdio.h>

int main () {
  
  int ano_nascimento, ano_tual, idade;

  printf("Digite o ano de nascimeento: ");
  scanf("%d", &ano_nascimento);

  printf("Digite o ano atual: ");
  scanf("%d", &ano_tual);

  idade = ano_tual - ano_nascimento;

  printf("Idade: %d\n", idade);
  
  return 0;
}