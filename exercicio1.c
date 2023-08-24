#include <stdio.h>

int main(){
    // Escreva um programa em C que peça ao usuário dois inteiros e apresente o resultado da realização das operações aritméticas.

    int numero1, numero2;

    scanf("%d", &numero1);
    scanf("%d", &numero2);

    //soma
    printf("%d + %d = %d\n", numero1, numero2, numero1+numero2);
    //subtração
    printf("%d - %d = %d\n", numero1, numero2, numero1-numero2);
    //multiplicação
    printf("%d * %d = %d\n", numero1, numero2, numero1*numero2);
    //divisão
    printf("%d / %d = %d\n", numero1, numero2, numero1/numero2);
    //módulo (resto da divisão)
    printf("%d %% %d = %d\n", numero1, numero2, numero1%numero2);
}