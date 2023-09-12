#include<stdio.h>

int main(){
    // Escreva um programa que o usuário escolhe uma opção entre 2 
    // 1. calcular salário líquido
    // 2. calcular salário bruto
    // Recebe do usuário o valor que o funcionário recebe por hora trabalhada
    // e a quantidade de horas trabalhadas no mês.

    int opcao;

    printf("Escolha uma opcao:\n");
    printf("1. salario liquido\n");
    printf("2. salario bruto\n");

    scanf("%d", &opcao);

    float horas, valor_hora, aliquota_irpf, deducao_irpf, aliquota_inss;
    printf("Digite a quantidade de horas trabalhadas:\n");
    scanf("%f", &horas);

    printf("Digite o valor hora\n");
    scanf("%f", &valor_hora);

    if(opcao == 2){
        printf("Salario bruto eh igual a %.2f\n", (horas * valor_hora));
    }else{
        float salario = valor_hora * horas;

        if(salario <= 2112){
            aliquota_irpf = 0.0;
            deducao_irpf = 0.0;
        }else if(salario > 2112 && salario <= 2826.65){
            aliquota_irpf = 0.075;
            deducao_irpf = 158.4;
        }else if(salario > 2826.65 && salario <= 3751.05){
            aliquota_irpf = 0.15;
            deducao_irpf = 370.4;
        }else if(salario > 3751.05 && salario <= 4664.68){
            aliquota_irpf = 0.225;
            deducao_irpf = 651.73;
        }else{
            aliquota_irpf = 0.275;
            deducao_irpf = 884.96;
        }

        if(salario <= 1302){
            aliquota_inss = 0.075;
        }else if(salario > 1302 && salario <= 2571.29){
            aliquota_inss = 0.09;
        }else if(salario > 2571.29 && salario <= 3856.94){
            aliquota_inss = 0.12;
        }else if(salario > 3856.94 && salario <= 7507.49){
            aliquota_inss = 0.14;
        }else{
            aliquota_inss = 0.0;
        }

        float salario_liquido, desconto_irpf, desconto_inss;

        desconto_irpf = salario * aliquota_irpf - deducao_irpf;
        desconto_inss = salario * aliquota_inss;
        salario_liquido = salario - (desconto_irpf) - (desconto_inss);

        printf("O salario liquido eh %.2f", salario_liquido);
    }    
}