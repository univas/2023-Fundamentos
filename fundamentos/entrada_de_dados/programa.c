#include <stdio.h>

int main(){
    /**
        Devemos utilizar a mesma lógica da impressão de dados para leitura de dados
        %d => inteiro
        %f => decimal ou decimal preciso
        %c => caracter
     */
    int numero;
    int ano_nascimento; // declarando

    printf("Digite um numero: ");
    // Utilizo a função scanf para obter dados da entrada padrão
    scanf("%d", &numero);
    // o & remete ao endereço da memória que a variável está apontando.

    printf("O numero digitado foi: %d\n\n", numero);



    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    int idade;
    int ano_atual = 2024;

    idade = ano_atual - ano_nascimento;

    printf("Sua idade eh: %d\n\n", idade);
}