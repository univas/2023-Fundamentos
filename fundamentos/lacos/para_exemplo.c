#include <stdio.h>

int main(){
    // Dado um número digitado pelo usuário, imprima os números pares entre 0 e o número digitado.

    int numero_digitado;

    printf("Digite um numero:");
    scanf("%d", &numero_digitado);

    for(int i = 0; i <= numero_digitado; i = i + 1){
        if(i % 2 == 0){
            printf("Numero: %d\n", i);
        }
    }
}