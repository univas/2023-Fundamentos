#include<stdio.h>

int main(){
    int opcao;
    float numero1, numero2, resultado;

    printf("Escolha uma operacao\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");

    scanf("%d", &opcao);

    if(opcao < 1 || opcao > 4){
        printf("Opcao invalida\n");
    }else{
        printf("Digite o primeiro numero:\n");
        scanf("%f", &numero1);

        printf("Digite o segundo numero:\n");
        scanf("%f", &numero2);

        if(opcao == 4 && numero2 == 0){
            printf("Nao posso fazer divisao por zero\n");
        }else{
            if(opcao == 1){
                resultado = numero1 + numero2;
                printf("O resultado %.2f + %.2f eh: %.2f", numero1, numero2, resultado);
            }else if(opcao == 2){
                resultado = numero1 - numero2;
                printf("O resultado %.2f - %.2f eh: %.2f", numero1, numero2, resultado);
            }else if(opcao == 3){
                resultado = numero1 * numero2;
                printf("O resultado %.2f * %.2f eh: %.2f", numero1, numero2, resultado);
            }else{
                resultado = numero1 / numero2;
                printf("O resultado %.2f / %.2f eh: %.2f", numero1, numero2, resultado);
            }

            
        }
    }
}