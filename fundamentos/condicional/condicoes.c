#include <stdio.h>

int main(){
    int opcaoDigitada;
    
    printf("Menu de opcoes\n");
    printf("1. opcao 1\n");
    printf("2. opcao 2\n");
    printf("3. opcao 3\n");

    scanf("%d", &opcaoDigitada);

    // if(opcaoDigitada == 1){
    //     printf("Vai entrar na opcao 1.");
    // }else if(opcaoDigitada == 2){
    //     printf("Usuario escolheu a opcao 2.");
    // }else if(opcaoDigitada == 3){
    //     printf("Numero digitado eh 3.");
    // }else{
    //     printf("Alternativa invalida.");
    // }


    //switch(/*expressão*/){
        // case /*constante*/: /*instruções*/;
        // case /*constante*/: /*instruções*/;
        // default: /*instruções*/;
    // }

    switch(opcaoDigitada){
        case 1: 
            printf("Vai entrar na opcao 1.");
            printf("Outro texto");
            break;
        case 2: 
            printf("Usuario escolheu a opcao 2.");
            break;
        case 3: 
            printf("Numero digitado eh 3.");
            break;
        default: 
            printf("Alternativa invalida.");
            break;
    }

    switch(opcaoDigitada){
        case 'a': printf("Opcao a");
    }
}