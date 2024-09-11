#include <stdio.h>

int main(){
    int mes = 0, dias = 0;

    printf("Digite o mes desejado:\n");
    scanf("%d", &mes);

    printf("------------- Usando IF/ELSE --------------\n\n");
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        printf("O mes tem 31 dias\n");
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        printf("O mes tem 30 dias\n");
    }else if(mes == 2){
        printf("O mes tem 29 dias\n");
    }


    printf("\n\n\n------------- Usando SWITCH com BREAK --------------\n\n");
    switch(mes){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mes tem 31 dias\n");
            break;

        case 2:
            printf("O mes tem 29 dias\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mes tem 30 dias\n");
            break;
    }


    printf("\n\n\n------------- Usando SWITCH sem BREAK --------------\n\n");
    dias = 29;
    switch(mes){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias += 1;
        case 4:
        case 6:
        case 9:
        case 11:
            dias += 1;
        case 2:
            dias += 0;
            printf("O mes tem %d dias", dias);
    }
}