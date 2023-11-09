#include <stdio.h>

// Ler o nome completo do usuário e imprimir o primeiro nome
int main(){
    char nomecompleto[100];
    char primeironome[100];
    // for(int i = 0; i < 100; i++){
    //     nomecompleto[i] = '\0';
    //     primeironome[i] = '\0';
    // }

    nomecompleto[0] = '\0';
    primeironome[0] = '\0';

    printf("Digite seu nome completo:\n");
    gets(nomecompleto);
    // fflush(stdin);

    printf("Nome completo: %s\n", nomecompleto);

    // Quando eu quero manter as duas informações
    for(int i = 0; i < 100; i++){
        
        if(nomecompleto[i] != ' '){
            // printf("%c\n", nomecompleto[i]);    
            primeironome[i] = nomecompleto[i];
        }else{
            primeironome[i] = '\0';
        }
    }

    printf("Primeiro Nome: %s\n", primeironome);

    // Marcos Antonio
    // MarcosAntonio

    // Quando eu não preciso do nome completo
    for(int i = 0; i < 100; i++){
        
        if(nomecompleto[i] == ' '){   
            nomecompleto[i] = '\0';
        }
    }

    printf("Primeiro Nome: %s", nomecompleto);
}