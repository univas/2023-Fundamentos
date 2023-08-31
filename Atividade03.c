#include <stdio.h>

int main(){
    int ano_nascimento, ano_atual;

    ano_atual = 2023;

    printf("Digite o ANO de seu nascimento:\n");
    scanf("%d", &ano_nascimento);

    int idade = ano_atual - ano_nascimento;

    printf("Sua idade atual eh: %d", idade);
}