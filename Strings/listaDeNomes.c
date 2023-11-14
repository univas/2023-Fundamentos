#include<stdio.h>
#include <string.h>
// Criar um programa que armazene uma lista de nomes
// e calcule a quantidade media de caracteres nos nomes


// Criar uma função addNome(matriz) => ler do usuário um nome e add na matriz
// Criar uma função para calcular o tamanho medio das strings, return media.

int main(){
    char nome[30];
    char nomes[30][30];
    int opcao;
    float countMedia = 0;
    int quantidade = 0;

    // Preenche todas as posições da primeira coluna 
    for(int i = 0; i < 30; i++){
        nomes[i][0] = '\0';
    }

    do{
        printf("Escolha uma opção:\n");
        printf("1. Cadastrar novo nome\n");
        printf("2. Sair\n");
        scanf(" %d", &opcao);
        while(getchar() != '\n');
        if(opcao != 2){
            printf("Digite um novo nome:\n");
            
            gets(nome);
            gets(nome);

            int i = 0;

            while(nomes[i][0] != '\0' && i < 30){
                i++;
            }

            for(int index = 0; index < 30; index++){
                nomes[i][index] = nome[index];
            }
        }
    }while(opcao != 2);

    for(int i = 0; i < 30; i++ ){
        printf("%s\n", nomes[i]);
        if(nomes[i][0] != '\0'){
            countMedia += strlen(nomes[i]);
            quantidade++;
        }
    }

    printf("Media: %.2f", (countMedia / quantidade));
}
