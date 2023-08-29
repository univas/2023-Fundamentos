#include <stdio.h>

int main(){
    // Escreva um programa que peça ao usuário um
    // número inteiro que representa a quantidade
    // de segundos e em seguida imprima na tela 
    // o equivalente a horas, minutos e segundos

    int segundos;

    printf("Digite a quantidade de segundos\n");
    scanf("%d", &segundos);

    int horas, minutos, segundos_restantes;

    horas = segundos / 3600;
    minutos = segundos % 3600 / 60;
    segundos_restantes = segundos % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos_restantes);
}