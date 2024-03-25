#include <iostream>

int main () {
    int numero1;
    int numero2;
   
    printf("Digite um número1: ");
    scanf("%d", &numero1);
    printf("Voce digitou : %d ", numero1);
    
   printf("\n Digite outro numero: ");
   scanf("%d", &numero2);
   printf("Voce digitou : %d ", numero2);
   
    int soma = numero1 + numero2;
    
    printf("soma: %d + %d = %d\n", numero1, numero2, soma);

    int resultado;
   return 0;
}