#include <stdio.h>

int main(){
    int valor = 0;

    printf("Digite um numero maior que zero:");
    scanf("%d", &valor);

    if(valor > 0){
        // condição verdadeira
        printf("Voce acertou!\n\n");
        printf("O resultado da comparacao: %d", valor > 0);
    }else{
        // condição falsa
        printf("Voce errou!");
        printf("O resultado da comparacao: %d", valor > 0);
    }
}