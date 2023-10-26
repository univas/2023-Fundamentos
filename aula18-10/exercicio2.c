
#include <stdio.h>

// Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma PA., armazenando esses valores em um vetor de tamanho 10.

int main(){
    int numero_inicial;
    int razao;
    int valores[10];

    printf("Digite o valor inicial:\n");
    scanf("%d", &numero_inicial);

    printf("Digite a razao:\n");
    scanf("%d", &razao);

    valores[0] = numero_inicial;

    for(int i = 1; i < 10; i++){
        valores[i] = valores[i-1] + razao;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", valores[i]);
    }
}