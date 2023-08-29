#include <stdio.h>

int main(){
    int num1, num2, num3;
    float media;

    printf("Escreva o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Escreva o segundo numero:\n");
    scanf("%d", &num2);

    printf("Escreva o terceiro numero:\n");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A media eh: %.2f", media);
}