#include <stdio.h>
#include <string.h>

// Ler uma palavra e imprimi-la de tras pra frente
int main(){
    char palavra[30];

    printf("Digite uma palavra:\n");
    gets(palavra);
    fflush(stdin);

    // \0 faz parte da palavra
    int tamanhoDaPalavra = strlen(palavra);

    for(int i = tamanhoDaPalavra-1; i >= 0; i--){
        printf("%c", palavra[i]);
    }

    printf("\n");
}