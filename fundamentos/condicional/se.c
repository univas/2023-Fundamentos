#include <stdio.h>

// Escreva um programa que solicite ao usuario
// dois numeros inteiros e imprima as possiveis 
// combinacoes logicas entre eles
// Exemplo:
// O resultado de 10 == 10 eh: 1
// >
// <
// >=
// <=
// !=

int main(){
    int numero1, numero2;

    printf("Digite o numero 1:");
    scanf("%d", &numero1);

    printf("\nDigite o numero 2:");
    scanf("%d", &numero2);

    printf("\nO resultado de %d == %d eh: %d", numero1, numero2, numero1 == numero2);
    printf("\nO resultado de %d > %d eh: %d", numero1, numero2, numero1 > numero2);
    printf("\nO resultado de %d < %d eh: %d", numero1, numero2, numero1 < numero2);
    printf("\nO resultado de %d >= %d eh: %d", numero1, numero2, numero1 >= numero2);
    printf("\nO resultado de %d <= %d eh: %d", numero1, numero2, numero1 <= numero2);
    printf("\nO resultado de %d != %d eh: %d", numero1, numero2, numero1 != numero2);
}