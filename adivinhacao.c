/*
Escreva um programa que ajude o usuário a descobrir um número secreto.
O usuário tem 03 tentativas, a cada tentativa deve fornecer uma ajuda ao usuário para a próxima tentativa.
Se não descobrir até a última tentativa então deve falar que o usuário falhou.
Defina um número fixo para ser adivinhado.
DESAFIO: coloque o número para ser gerado randomicamente.
*/

#include <stdio.h>

int main(){
    int numero_secreto, numero_digitado;

    numero_secreto = 52;

    // Primeira tentativa
    printf("Tente adivinhar o numero\n");
    scanf("%d", &numero_digitado);

    if(numero_digitado == numero_secreto){
        printf("Parabens, voce acertou de primeira!\n");
    }else{
        if(numero_digitado > numero_secreto){
            printf("Voce digitou um numero maior.");
        }else{
            printf("Voce digitou um numero menor.");
        }
    }


    if(numero_digitado != numero_secreto){
        // Segunda tentativa
        printf("Tente adivinhar o numero\n");
        scanf("%d", &numero_digitado);

        if(numero_digitado == numero_secreto){
            printf("Parabens, voce acertou com duas tentativas!\n");
        }else{
            if(numero_digitado > numero_secreto){
                printf("Voce digitou um numero maior.");
            }else{
                printf("Voce digitou um numero menor.");
            }
        }
    }


    if(numero_digitado != numero_secreto){
        // Terceira tentativa
        printf("Tente adivinhar o numero\n");
        scanf("%d", &numero_digitado);

        if(numero_digitado == numero_secreto){
            printf("Parabens, voce acertou na ultima chance!\n");
        }else{
            printf("Voce nao conseguiu adivinhar!\n");
        }
    }
}