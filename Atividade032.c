#include<stdio.h>

int main(){
    int numero1, numero2;
    float media;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);

    media = (numero1+numero2) / 2.0;

    printf("A media aritmetica eh: %.2f", media);
}