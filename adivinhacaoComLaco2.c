/*
Escreva um programa que ajude o usuário a descobrir um número secreto.
O usuário tem 03 tentativas, a cada tentativa deve fornecer uma ajuda ao usuário para a próxima tentativa.
Se não descobrir até a última tentativa então deve falar que o usuário falhou.
Defina um número fixo para ser adivinhado.
DESAFIO: coloque o número para ser gerado randomicamente.
*/

#include <stdio.h>

#define TOTAL_TENTATIVAS 5

int main(){
    int numero_secreto, numero_digitado, quantidade_tentativas = TOTAL_TENTATIVAS;   

    numero_secreto = 52;

    do{
        // Tentativa
        printf("\nTente adivinhar o numero\t");
        printf("Restam %d tentativas\n", (quantidade_tentativas));

        scanf("%d", &numero_digitado);

        if(numero_digitado == numero_secreto){
            if(quantidade_tentativas == TOTAL_TENTATIVAS){
                printf("Parabens, voce acertou de primeira! SUCESSO!!!!\n");
            }else{
                printf("Parabens, voce acertou!\n");
            }
        }else{
            if(0 == quantidade_tentativas){
                printf("Voce nao conseguiu acertar.");
            }else if(numero_digitado > numero_secreto){
                printf("Voce digitou um numero maior.");
            }else{
                printf("Voce digitou um numero menor.");
            }
        }
        quantidade_tentativas--;
    }while(numero_digitado != numero_secreto && quantidade_tentativas > 0);
}