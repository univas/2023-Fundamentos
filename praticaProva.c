#include<stdio.h>

int main(){
    // Digite 10 numeros
    // Mostre quantos pares e quantos impares

    // Iniciando com zero para não obter lixo de memória
    int numero_digitado, qtde_pares = 0, qtde_impares = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &numero_digitado);

        if(numero_digitado % 2 == 0){
            qtde_pares++;
        }else{
            qtde_impares++;
        }
    }

    printf("Pares %d\nImpares %d\n", qtde_pares, qtde_impares);
}