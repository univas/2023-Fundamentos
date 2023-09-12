#include<stdio.h>

int main(){
    int dia, mes, ano, quant_dias;

    printf("Digite o dia\n");
    scanf("%d", &dia);
    printf("Digite o mes\n");
    scanf("%d", &mes);
    printf("Digite o ano\n");
    scanf("%d", &ano);

    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        // 31 dias
        quant_dias = 31;
    }else if(mes == 2){
        quant_dias = ano % 4 == 0 ? 29 : 28;
    }else{
        quant_dias = 30;
    }
    dia = dia % quant_dias + 1;
    mes = dia == 1 ? mes + 1 : mes;
    ano = mes == 12 && dia == 1 ? ano + 1 : ano;
    printf("%d/%d/%d", dia, mes, ano);
}