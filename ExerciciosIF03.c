#include<stdio.h>

int main(){
    // Escreva um programa que recebe do usuário um número float
    // que representa o salário de uma pessoa e informe a faixa do imposto 
    // de renda que ela se enquadra

    float salario, faixa = 0.0;

    printf("Informe o salario:\n");
    scanf("%f", &salario);

    if(salario <= 2112){
        faixa = 0.0;
    }else if(salario > 2112 && salario <= 2826.65){
        faixa = 0.075;
    }else if(salario > 2826.65 && salario <= 3751.05){
        faixa = 0.15;
    }else if(salario > 3751.05 && salario <= 4664.68){
        faixa = 0.225;
    }else{
        faixa = 0.275;
    }

    printf("A faixa enquadrada eh: %.2f%%", (100.0 * faixa));
}