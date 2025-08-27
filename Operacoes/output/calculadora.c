#include<stdio.h>

int main() {
  
int numero1, numero2;

printf("Digite seu primeiro numero: ");
scanf("%d", &numero1);

printf("Digite seu segundo numero: ");
scanf("%d", &numero2);

printf("Soma: %d\n", numero1 + numero2);
printf("Sulbtracão: %d\n", numero1 - numero2);
printf ("Multiplicacao: %d\n", numero1 * numero2);

if (numero2 != 0) { // Evita divisão por Zero //
  printf("Divisao inteira: %d\n", numero1 / numero2);
  printf("Resto da Divisao: %d\n", numero1 % numero2);
}
else {
  printf("Nao e possivel dividir por zero.\n"); 
}




  return 0;

}