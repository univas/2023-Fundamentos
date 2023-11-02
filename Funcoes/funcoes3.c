#include <stdio.h>

#define QTDE 10

int calculaQuantidadeDeRepetidos(int numeros1[], int numeros2[]){
    int quantidade = 0;
    
    for(int i = 0; i < QTDE; i++){
        for(int j = 0; j < QTDE; j++){
            if(numeros1[i] == numeros2[j]){
                quantidade++;
            }
        }
    }

    return quantidade;
}

void dobrarOsValores(int numeros[]){
    for(int i = 0; i < QTDE; i++){
        numeros[i] *= 2;
    }
}

int main(){
    int numeros1[QTDE] = {1,2,3,4,5,6,7,8,9,0};
    int numeros2[QTDE] = {10,20,30,40,50,60,70,80,90,0};

    // printf("%d numeros repetidos.\n", calculaQuantidadeDeRepetidos(numeros1, numeros2));

    dobrarOsValores(numeros1);

    for(int i = 0; i < QTDE; i++){
        printf("%d\t", numeros1[i]);
    }
}