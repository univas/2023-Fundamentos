#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero.\n");
    scanf("%d", &numero);

    // <
    // <= ou >=

    if(numero > 10)
        printf("O numero eh maior que 10.\n");
    else if(numero == 10)
        printf("O numero eh igual a 10.\n");
    else
        printf("O numero eh menor que 10.\n");
    


    printf("Digite um novo numero\n");
    scanf("%d", &numero);

    // Verificando se o usuario digitou um valor entre 1 e 9
    if(numero < 1 || numero > 9){
        printf("Numero invalido\n");
    }


    float salario;

    printf("Digite o salario do funcionario\n");
    scanf("%f", &salario);

    float taxa_sindical;

    if(salario > 2000){
        taxa_sindical = 0.12;

    }else{
        taxa_sindical = 0.09;
    }

    // Equivalente ao if ternário
    taxa_sindical = salario > 2000 ? 0.12 : 0.09;
    float taxa_percentual = (taxa_sindical * 100);
    float valor_taxa = (salario * taxa_sindical);

    printf("A taxa sindical eh de %.2f%% que equivale a R$ %.2f", taxa_percentual, valor_taxa);
}