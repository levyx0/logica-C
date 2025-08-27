#include <stdio.h>

int main () {
    
float numero1, numero2, soma, media;

printf("Escreva sua nota 1 ");
scanf("%f", &numero1);

printf("Escreva sua nota 2");
scanf("%f", &numero2);

soma = numero1 + numero2;
media = soma / 2;


printf("A soma final de sua nota e: %.2f\n", soma);
printf("Sua media e: %.2f\n", media);




  return 0;
}
