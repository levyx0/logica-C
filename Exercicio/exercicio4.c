/* Faça um programa que leia um número real e imprima 1⁄4 desse número.

1 ler um numero real
2 Calcular 1/4 desse valor 
3 Mostre o Resultado  

*/

#include<stdio.h>

int main () {
 
 float num;


 scanf("%f", &num);


 printf("\n%f", (1.0 / 4) * num);


  return 0;
}