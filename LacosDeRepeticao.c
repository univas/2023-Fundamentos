#include <stdio.h>

int main(){
    int opcao, indice;

    // O usuário só pode digitar 
    // valores de 5 a 20;

    // O while pode executar nenhuma vez
    // enquanto o do while sempre executa
    // ao menos uma vez

    // printf("Digite uma numero");
    // scanf("%d", &opcao);

    // while(opcao < 5 || opcao > 20){
    //     printf("Digite uma numero");
    //     scanf("%d", &opcao);
    // }

    do{
        printf("Digite uma numero");
        scanf("%d", &opcao);
    }while(opcao < 5 || opcao > 20);

    printf("Escrevendo os numeros de 1 ate o valor digitado:\n");
    for(indice= 1; indice <= opcao; indice++){
        printf("%d\n", indice);
    }

    printf("Escrevendo os numeros pares de 0 ate o valor digitado:\n");
    for(indice= 0; indice <= opcao; indice++){
        if(indice % 2 == 0)
            printf("%d\n", indice);
    }
    // indice = indice + 2
    for(indice = 0; indice <= opcao; indice += 2){
        printf("%d\n", indice);
    }

}