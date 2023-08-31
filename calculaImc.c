#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;

    printf("Digite o seu peso:\n");
    scanf("%f", &peso);

    printf("Digite a sua altura:\n");
    scanf("%f", &altura);

    imc = peso / (pow(altura, 2));

    if(imc <= 18.5){
        printf("Voce esta abaixo do peso\n");
    }else if(imc >= 18.6 && imc <= 24.9){
        printf("Voce esta no peso ideal\n");
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("Levemente acima do peso\n");
    }else if(imc >= 30 && imc <= 34.9){
        printf("Voce esta com obesidade de grau I\n");
    }else if(imc >= 35 && imc <= 39.9){
        printf("Voce esta com obesidade de grau II\n");
    }else if(imc >= 40){
        printf("Voce esta com obesidade de grau III\n");
    }
}