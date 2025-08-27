#include<stdio.h>

int main () {
  

  int numero;

  printf("\nDigite sua nota: ");
  scanf("%d", &numero);

  if(numero >= 70) {
    printf("Voce esta Aprovado!\n");
  }else if(numero>= 50 && numero< 70){
    printf("Voce esta de recuperacao!\n");
  } else {
    printf("Voce esta reprovado\n");
  }



  return 0;
}