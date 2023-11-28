#include <stdio.h>

// Funções com vetores
// Composta por três itens principais:
// Tipo de retorno (int , void, float, char)
// Nome
// Parâmetros

// Uma função que não retorna nada é uma função que retorna void (vazio)
// Um parâmetro do tipo vetor é uma referencia, ou seja, aponta para o vetor original
void mostrarNaTela(int numeros[], int quantidade){
    for(int i = 0; i < quantidade; i++){
        numeros[i] = numeros[i] * 2;
        printf("%d\t", numeros[i]);
    }
}

int main(){
    int numeros[10];
    int quantidade_numeros = 0;

    numeros[0] = 10;
    quantidade_numeros++;

    numeros[1] = 20; 
    quantidade_numeros++;

    mostrarNaTela(numeros, quantidade_numeros);
    mostrarNaTela(numeros, quantidade_numeros);

}