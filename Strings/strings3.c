#include <stdio.h>

int main(){

    char texto1[100];

    printf("Digite um texto com no maximo 100 caracteres\n");
    gets(texto1);

    printf("Texto digitado: %s\n", texto1);

    // strlen
    for(int i = 0; i < 100; i++){
        if(texto1[i] == '\0'){ // se encontrou o final
            printf("O texto tem %d caracteres", i);
            break;
        }
    }
}