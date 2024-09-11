#include <stdio.h>

int main(){
    // Dado um número digitado pelo usuário, imprima a soma dos números ímpares entre 0 e ele mesmo.

    int numero_digitado, soma = 0;

    printf("Digite um numero:");
    scanf("%d", &numero_digitado);

    // alternativa 01
    for(int i = 0; i <= numero_digitado; i = i + 1){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("A soma eh: %d\n", soma);

    soma = 0;
    for(int i = 1; i <= numero_digitado; i = i + 2){
        soma = soma + i;
    }
    printf("A soma eh: %d\n", soma);
}