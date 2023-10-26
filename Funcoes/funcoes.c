#include <stdio.h>

int somar(int num1, int num2){
    int resultado = num1 + num2;
    return resultado;
}

float somarFloat(float num1, float num2){
    // Vai retornar o resultado da expressão que foi definida
    return num1 + num2;
}

int main(){
    int resultadoDaSoma = somar(10, 5);

    printf("O resultado da soma eh: %d\n", resultadoDaSoma);

    float resultadoDeOutraSoma = somarFloat(2.5, 7.5);

    printf("O resultado da soma eh: %.2f\n", resultadoDeOutraSoma);

}