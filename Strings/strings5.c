#include <stdio.h>
#include <ctype.h>

// Ler um texto e verificar se tem somente letras
int main(){
    char texto[100];

    printf("Digite um texto:\n");
    gets(texto);
    fflush(stdin);

    printf("Texto Digitado '%s'\n", texto);

    for(int i = 0; i < 100; i++){
        if(texto[i] == '\0'){
            break;
        }
        // função isalpha verifica se o caracter enviado faz parte do alfabeto.
        if(!isalpha(texto[i])){
            printf("Este texto deve possuir apenas letras.");
            break;
        }  
    }
}