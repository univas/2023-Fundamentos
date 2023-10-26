#include <stdio.h>

int somar(int num1, int num2){
    return num1 + num2;
}

void subtrair(){
    int num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    printf("Resultado da subtracao: %d", num1 - num2);
}

int main(){
    printf("Escolha uma opcao: \n");
    printf("1. somar\n");
    printf("2. subtrair\n");
    // multiplicacao
    // divisao
    // potencia
    // raiz quadrada
    // fatorial

    int opcao;

    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            int num1, num2;
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);

            printf("Digite o segundo numero:\n");
            scanf("%d", &num2);
            int resultado = somar(num1,num2);

            printf("Resultado: %d", resultado);
            break;

        case 2:
            subtrair();
            break;
    }

}