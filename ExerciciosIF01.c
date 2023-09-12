#include<stdio.h>

int main(){
    // Escreva um programa que recebe dois números do usuário
    // e informa se o segundo número é divisor do primeiro

    int numero1, numero2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);

    if(numero1 % numero2 == 0){
        printf("O numero2 eh divisor do numero1, (%d / %d)", numero1, numero2);
    }else{
        printf("O numero2 nao eh divisor do primeiro, (%d / %d)", numero1, numero2);
    }
}