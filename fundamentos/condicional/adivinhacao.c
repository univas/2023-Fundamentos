#include <stdio.h>

int main(){

    int numero_esperado = 7;
    int numero_digitado;

    printf("digite um numero para adivinhar");
    scanf("%d", &numero_digitado);

    if(numero_digitado == numero_esperado){
        printf("Parabens voce acertou!");
    }else if(numero_digitado < numero_esperado){
        printf("Voce errou! Digitou um numero menor que o esperado.");
    }else if(numero_digitado > numero_esperado){
        printf("Voce errou! Digitou um numero maior que o esperado.");
    }
}