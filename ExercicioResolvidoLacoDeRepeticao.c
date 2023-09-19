#include <stdio.h>

int main(){
    int numero, indice, resultado = 1;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%d", &numero);

    // Multiplica os numeros ate indice igual a 1
    for(indice = numero; indice >= 1; indice--){
        printf("%d * %d\n", resultado, indice);
        resultado *= indice;
    }

    printf("Resultado = %d\n", resultado);
}