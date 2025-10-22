#include<stdio.h>

int main() {

  int opcao;

  printf ("\nEscolha uma de 1 a 3: ");
  scanf("%d", &opcao);

  switch(opcao) {
    case 1:
    printf("\nVoce escolheu a opcao 1");
    break;
  }

  switch(opcao) {
    case 2:
    printf("\nVoce escolheu a opcao 2");
    break;
  }

  switch(opcao) {
    case 3:
    printf("\nVoce escolheu a opcao 3");
    break;

   
   
    default:
  printf("\nOpcao invalida");
  
  return 0;



  }



}