#include <stdio.h>

// Funções
// Composta por três itens principais:
// Tipo de retorno (int , void, float, char)
// Nome
// Parâmetros

// Uma função que não retorna nada é uma função que retorna void (vazio)
void mostrarNaTela(){
    printf("\nMostrar na tela\n");
}

void somar(int a, int b){
    int resultado;
    resultado = a+b;
    printf("\n%d\n", resultado);
}

int subtrair(int a, int b){
    return a-b;
}

int main(){
    // Executamos uma função chamando seu nome e passando os parÂmetros
    mostrarNaTela();

    int num1 = 5, num2 = 5;

    printf("Digite o numero 1\n");
    scanf("%d", &num1);

    printf("Digite o numero2\n");
    scanf("%d", &num2);

    somar(num1, num2);

    int resultado = subtrair(num1, num2);

    printf("\n%d", resultado);

}