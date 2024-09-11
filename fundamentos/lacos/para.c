#include <stdio.h>

int main(){
    int numero = 0;

    // laços de repetição
    printf("Digite um numero");
    scanf("%d", &numero);

    // for(/*condições de passo e parada*/){
        // /*código que vai ser executado*/
    // }

    for(int i = 1; i <= numero; i = i + 1){
        printf("%d\n", i);
    }

}