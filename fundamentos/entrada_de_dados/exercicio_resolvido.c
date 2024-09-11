#include <stdio.h>

/*
    Crie um programa que solicite ao usuário
    digitar o valor de um produto e o percentual
    de desconto concedido.
    O programa deve calcular o valor do desconto
    e apresentar o valor do produto com desconto.
*/

int main(){
    int valor_produto;
    int valor_desconto;
    float valor_com_desconto, desconto;

    printf("Valor do produto:");
    scanf("%d", &valor_produto);

    printf("\nValor do desconto:");
    scanf("%d", &valor_desconto);

// Divisão de inteiros o resultado é inteiro
    desconto = ((float)valor_desconto / 100) * valor_produto;
    valor_com_desconto = valor_produto - desconto;

    printf("\n\n\tO valor com desconto eh: %.f", valor_com_desconto);

}