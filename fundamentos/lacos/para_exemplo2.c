#include <stdio.h>

int main(){
    // Dado um número digitado pelo usuário, imprima a soma dos números naturais entre 0 e ele mesmo.

    int numero_digitado, soma = 0;

    printf("Digite um numero:");
    scanf("%d", &numero_digitado);

    for(int i = 0; i <= numero_digitado; i = i + 1){
        soma = soma + i;
    }

    printf("A soma eh: %d", soma);
}