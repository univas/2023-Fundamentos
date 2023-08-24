#include <stdio.h>

int main(){
    int idade = 45;

    printf("A pessoa tem %d anos.\n", idade);

    printf("A pessoa tem %d anos.\n", idade++);

    printf("A pessoa tem %d anos.\n", idade);

    printf("A pessoa tem %d anos.\n", ++idade);

    int ano_nascimento = 1976;
    printf("A pessoa tem %d anos. E nasceu em %d\n", idade, ano_nascimento);

    float salario = 1320.45;


    printf("O salario da pessoa eh: %f\n", salario);
    printf("O salario da pessoa eh: %.2f\n", salario);

    char letra = 'A';

    printf("A letra eh: %c\n", letra);

    // printf("Digite o salario da pessoa\n");
    // scanf("%f", &salario);

    // printf("Salario digitado: %.2f\n", salario);

    // salario = salario - 40;

    // printf("Novo salario com deducao eh %.2f\n", salario);

    // fflush(stdin);
    printf("Digite uma letra: \n");
    letra = getchar();
    printf("Letra: %c\n", letra);
}