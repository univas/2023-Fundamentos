#include <stdio.h>
#include <string.h>
// Vetores de caracteres (Strings)

// strlen = Calcular o tamanho da string
// strchr = Verifica se existe determinado caracter dentro da string
// strcmp = Compara duas strings sendo 
// -1 a primeira menor que a segunda
// 0 ambas iguais
// +1 a segunda menor que a primeira

int main(){
    char nome_completo[100];

// Deve inicializar o vetor de caracteres com \0 em todas as posições
    for(int i = 0; i < 100; i++){
        nome_completo[i] = '\0';
    }

    printf("Digite o nome completo:\n");
    gets(nome_completo);
    // Limpar o buffer
    while(getchar() != '\n');

    printf("\n\t%s\n", nome_completo);

    for(int i = 0; i < 100; i++){
        if(nome_completo[i] != '\0'){
            printf("\n%c\t", nome_completo[i]);
        }
    }
}