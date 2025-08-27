#include<stdio.h>

int main () {
    
   int idade;
   float altura;
   char letra;
   char nome[50];
   
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);

   printf("Digite sua altura: ");
   scanf("%f", &altura);

   printf("Digite sua Letra: ");
   scanf(" %c", &letra);

   printf("Digite seu Nome: ");
   scanf("%49s", nome);

   printf("idade: %d\naltura: %.2f\nletra: %c\nnome: %s\n", idade, altura, letra, nome);
    
    
    
    
    return 0;

}