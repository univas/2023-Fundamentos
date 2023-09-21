#include<stdio.h>

int main(){
    // Solicite um numero
    // Imprima os numeros primos
    // entre 1 e o valor digitado.

    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        int quantidade_divisores = 0;

        for(int divisor = 1; divisor <= i; divisor++){
            if(i % divisor == 0){
                quantidade_divisores++;
            }
        }

        if(quantidade_divisores == 2 || i == 1){
            printf("%d\n", i);
        }
    }

    
}