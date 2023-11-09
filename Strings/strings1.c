#include <stdio.h>

int main(){
    char nome[30];
    char nome2[30];

    printf("Digite seu nome completo:\n");
    scanf("%s", &nome);
    fflush(stdin);

    printf("O nome digitado com scanf foi: %s\n", nome);


    printf("Digite seu nome completo:\n");
    gets(nome2);
    fflush(stdin);

    printf("O nome digitado com gets foi: %s\n", nome2);
}