#include <stdio.h>

int main(){

    printf("$$$$$$$$ MENU $$$$$$$$\n");
    printf("1. Novo\n");
    printf("2. Editar\n");
    printf("3. Excluir\n");
    printf("4. Listar\n");

    printf("Escolha uma opcao acima\n");
    int opcao;

    scanf("%d", &opcao);
    /*
        if(opcao ==1 ){
            printf("Opcao 01");
        }else if(opcao ==2 ){
            printf("Opcao 02");
        }else if(opcao ==3 ){
            printf("Opcao 03");
        }else if(opcao ==4 ){
            printf("Opcao 04");
        }else{
            printf("Opcao invalida");
        }
    */
    switch (opcao){
        case 1: 
            printf("Opcao 01");
            break;
        case 2: 
            printf("Opcao 02");
            break;
        case 3:
            printf("Opcao 03");
            break;
        case 4: 
            printf("Opcao 04");
            break;
        default:
            printf("Opcao invalida");
            break;
    }

}

#include<math.h>
/*
    1. Desenvolva uma calculadora com as opcoes (soma, subtração, multiplicação, divisão, potência e raiz quadrada.)
    Utilize estruturas de condição:
    Switch para a escolha da operação
    IF e ELSE para validar as operações se pode ou não executar

    2. 
*/