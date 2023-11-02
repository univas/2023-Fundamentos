#include <stdio.h>
#include <math.h>

float somar(float num1, float num2){
    float resultado = num1 + num2;
    return resultado;
}

float subtrair(float num1, float num2){
    return num1 - num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

float divisao(float num1, float num2){
    return num1 / num2;
}

float potencia(float base, float expoente){
    return pow(base, expoente);
}

float raiz(float numero){
    return sqrt(numero);
}

float fatorial(float numero){
    float resultado = 1;
    for(int i = numero; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

float lerNumero(char mensagem[]){
    float numeroLido;
    printf("%s\n", mensagem);
    scanf("%f", &numeroLido);

    return numeroLido;
}

void mostarResultadoEmTela(float resultado){
    printf("Resultado: %.2f\n", resultado);
}

void exec(int opcao){
    int num1, num2;
    switch (opcao)
    {
        case 1:
            num1 = lerNumero("Digite o primeiro numero:");
            num2 = lerNumero("Digite o segundo numero:");
            mostarResultadoEmTela(somar(num1,num2));
            break;

        case 2:
            num1 = lerNumero("Digite o primeiro numero:");
            num2 = lerNumero("Digite o segundo numero:");
            mostarResultadoEmTela(subtrair(num1,num2));
            break;

        case 3:
            num1 = lerNumero("Digite o primeiro numero:");
            num2 = lerNumero("Digite o segundo numero:");
            mostarResultadoEmTela(multiplicar(num1,num2));
            break;

        case 4:
            num1 = lerNumero("Digite o primeiro numero:");
            num2 = lerNumero("Digite o segundo numero:");
            mostarResultadoEmTela(divisao(num1,num2));
            break;

        case 5:
            num1 = lerNumero("Digite a base:");
            num2 = lerNumero("Digite o expoente:");
            mostarResultadoEmTela(potencia(num1,num2));
            break;

        case 6:
            num1 = lerNumero("Digite o numero:");
            mostarResultadoEmTela(raiz(num1));
            break;

        case 7:
            num1 = lerNumero("Digite o numero:");
            mostarResultadoEmTela(fatorial(num1));
            break;

        case 8:
            printf("Obrigado por utilizar o nosso aplicativo.\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }
}

int main(){
    int opcao;
    do{
        printf("Escolha uma opcao: \n");
        printf("1. somar\n");
        printf("2. subtrair\n");
        printf("3. multiplicacao\n");
        printf("4. divisao\n");
        printf("5. potencia\n");
        printf("6. raiz quadrada\n"); 
        printf("7. fatorial\n");
        printf("8. sair");

        scanf("%d", &opcao);
        exec(opcao);
    }while(opcao != 8);
}