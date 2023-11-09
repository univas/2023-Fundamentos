#include <stdio.h>
#include <string.h>

int main(){
    char texto1[100];
    char texto2[100];

    // for(int i = 0; i < 100; i++){
    //     texto1[i] = '\0';
    //     texto2[i] = '\0';
    // }

    // Indica que é uma string vazia
    texto1[0] = '\0'; // Codgio do Rufino
    texto2[0] = '\0';

    printf("Digite um texto com no maximo 100 caracteres\n");
    gets(texto1);

    printf("Texto1: %s\n", texto1);
    printf("Texto2: %s\n\n", texto2);

    strcpy(texto2, texto1);

    printf("Texto2: %s\n", texto2);
}