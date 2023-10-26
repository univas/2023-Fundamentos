#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Escreva um programa que preencha aleatoriamente dois vetores com 10 números inteiros depois imprima os dois vetores e informe quantos números repetidos possuem nos dois vetores.
int main(){
    int numeros1[10];
    int numeros2[10];
    srand(time(NULL));
    int numeros_iguais = 0;

    for(int i = 0; i < 10; i++){
        numeros1[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        numeros2[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(numeros1[i] == numeros2[j]){
                numeros_iguais++;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", numeros1[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d\t", numeros2[i]);
    }

    printf("\nExistem %d numeros iguais.\n", numeros_iguais);
}