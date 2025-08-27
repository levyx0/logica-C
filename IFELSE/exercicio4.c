#include<stdio.h>

int main () {
  int num1, num2;

  printf("\nDigite seu primeiro numero: ");
  scanf("%d", &num1);

  printf("\nDigite seu segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("O primeiro numero (%d)  e maior que o segundo (%d).\n", num1, num2);
  } else if (num2 > num1) {
    printf("O segundo numero e maior que o primeiro (%d).\n", num2, num1);
  }else {
    printf("O primeiro e o segundo sao iguais (%d).\n", num1);
  }
  
  return 0;
}