/*.Faça um programa que calcule o reajuste do salário de um funcionário. Para isso, o programa
deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor
do novo salário.

1 Ler o salário atual (float)
2 Ler o percentual (int)
3 Calcular o novo salário
4 imprimir o valor do novo salário 
*/

#include<stdio.h>

int main () {

  float salario;
  int percentual_reajuste;
  float novo_salario;

  printf("\nDigite seu salario: ");
  scanf("%f", &salario);

  printf("\nDigite seu reajuste");
  scanf("%d", &percentual_reajuste);

  novo_salario = salario + ((percentual_reajuste / 100.0) * salario);

  printf("\n%.2f", novo_salario);

  return 0;
}