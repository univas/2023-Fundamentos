#include <stdio.h>

int main(){
    int num1, num2, opcao, resultado;

    printf("Digite o num 1");
    scanf("%d", &num1);

    printf("Digite o num 2");
    scanf("%d", &num2);

    printf("Escolha uma operacao\n");
    printf("1. somar\n");
    printf("2. subtrair\n");
    printf("3. multiplicar\n");
    printf("4. dividir\n");

    scanf("%d", &opcao);

    switch(opcao){
        case 1: resultado = num1 + num2;
            break;
        case 2: resultado = num1 - num2;
            break;
        case 3: resultado = num1 * num2;
            break;
        case 4: resultado = num1 / num2;
            break;
    }

    printf("O resultado eh: %d", resultado);
}