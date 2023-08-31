#include <stdio.h>

int main(){
    int idade = 15;

    /*
        Operadores lógicos:
        && - Operação E
        || - Operação OU
        !  - negação
        != - diferente
        >  - maior que
        <  - menor que
        >= - maior ou igual a 
        <= - menor ou igual a
        == - igual a
    */

    if(idade >= 18){
        printf("Pessoa eh maior de idade.\n");
    }

    int peso = 75;

    if(idade >= 18 && peso <= 80){
        printf("Pode brincar\n");
    }

    char acompanhado_pais = 'S';

    if(idade >= 18 || acompanhado_pais == 'S'){
        printf("Pode entrar na festa\n");
    }


    float salario = 1500.50;

    if(salario != 1200){
        printf("Salario diferente do valor\n");
    }
}