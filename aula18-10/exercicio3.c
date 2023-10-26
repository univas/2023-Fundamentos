
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Escreva um programa que sorteie, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. 
// Se estiver, diga a posição que ele está.

int main(){
    int valores[10];
    int valorDigitado;
    int posicaoEncontrada = -1;
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        do{
            valores[i] = rand() % 100;
        }while(valores[i] < 80);
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", valores[i]);
    }

    printf("Digite um valor:\n");
    scanf("%d", &valorDigitado);

    for(int i = 0; i < 10; i++){
        if(valores[i] == valorDigitado){
            posicaoEncontrada = i;
        }
    }

    if(posicaoEncontrada != -1){
        printf("O numero que voce digitou esta na %d posicao.\n", posicaoEncontrada + 1);
    }

    
}