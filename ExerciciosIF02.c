#include<stdio.h>

int main(){
    // Escreva um programa que recebe um número de ponto flutuante
    // e informe se a parte inteira é par ou ímpar

    float numero;

    // Pedimos pro usuario digitar um numero
    printf("Digite um numero:\n");
    scanf("%f", &numero);

    // extrai a parte inteira
    int parteInteira = (int)numero;

    // verifiquei se é par ou impar
    if(parteInteira % 2 == 0){
        printf("A parte inteira do numero eh par");
    }else{
        printf("A parte inteira do numero eh impar.");
    }
}