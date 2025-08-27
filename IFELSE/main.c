#include<stdio.h>

int main () {
  int idade;

  printf("\nQual a sua idade: ");
  scanf("%d", &idade);

  if(idade >= 18) {
    printf("\nVoce e maior de Idade");
  } else {
    printf("\nVoce e menor de Idade");
  }

  return 0;
}