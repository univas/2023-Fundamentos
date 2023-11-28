#include <stdio.h>

// Vetores de valores numéricos

int main(){
    // Em vetores de números eu não consigo obter a quantidade salva.
    // Por isso precisamos de uma variável para controlar.
    int quantidade_de_numeros = 0;
    int numeros[100];
    int numero_lido;

// Lendo um número do usuário
    printf("Digite um numero\n");
    scanf("%d", &numero_lido);

    numeros[quantidade_de_numeros] = numero_lido;
    quantidade_de_numeros++;

    for(int i = 0; i < quantidade_de_numeros; i++){
        printf("%d\t", numeros[i]);
    }
// Lendo um número do usuário



// Lendo vários números do usuário
    for(int i = 0; i< 4; i++){
        printf("Digite um numero\n");
        scanf("%d", &numero_lido);

        numeros[quantidade_de_numeros] = numero_lido;
        quantidade_de_numeros++;
    }

    for(int i = 0; i < quantidade_de_numeros; i++){
        printf("%d\t", numeros[i]);
    }
// Lendo vários números do usuário
}