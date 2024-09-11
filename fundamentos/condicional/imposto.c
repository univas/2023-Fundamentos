#include <stdio.h>

int main(){
    float salario, imposto = 0;

    // mulheres = 10%
    // homens = +5%

    char sexo = 'f';

    printf("Digite o salario\n");
    scanf("%f", &salario);

    // switch(sexo){
    //     case 'f': 
    //     case 'F': 
    //         imposto = 0.10;
    //         break;
    //     case 'm': 
    //     case 'M': 
    //         imposto = 0.15;
    //         break;
    // }

    switch(sexo){
        case 'm':
        case 'M': imposto = imposto + 0.05;
        case 'f':
        case 'F': imposto = imposto + 0.10;
        break;
        default: printf("Invalido");
    }

    printf("O imposto eh: %.2f", salario * imposto);
}