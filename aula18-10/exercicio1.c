#include <stdio.h>
#include <limits.h>

// Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e quais seus valores.

int main(){
    int numeros[10];
    int numeroLido;
    int elementoMaior, valorMaior = INT_MIN;
    int elementoMenor, valorMenor = INT_MAX;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero:\n");
        scanf("%d", &numeroLido);

        numeros[i] = numeroLido;
    }

    for(int i = 0; i < 10; i++){
        if(numeros[i] > valorMaior){
            elementoMaior = i;
            valorMaior = numeros[i];
        }

        if(numeros[i] < valorMenor){
            elementoMenor = i;
            valorMenor = numeros[i];
        }
    }

    printf("O maior elemento eh o %d que contem o valor %d\n", elementoMaior, valorMaior);

    printf("O menor elemento eh o %d que contem o valor %d\n", elementoMenor, valorMenor);
}