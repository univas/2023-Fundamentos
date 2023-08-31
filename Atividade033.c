#include <stdio.h>

int main(){
    float numero_lido;
    
    printf("Digite um numero de ponto flutuante:\n");
    scanf("%f", &numero_lido);

    printf("Parte inteira do numero eh: %d", (int)numero_lido);
}