#include<stdio.h>

int main(){
    float pontuacao_por_etapa = 6.25;

    float pontuacao_obtida = 0.0;
    int opcao = 0;

    printf("Pegue a chave de roda.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Pegue o macaco.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Pegue o pneu reserva.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Afrouxe os parafusos da roda que contem o pneu furado com a chave de roda.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Encaixe o macaco embaixo do carro.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Levante o carro ate que o pneu rode.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Retire os parafusos da roda.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Retire a roda com o pneu furado.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Coloque o pneu reserva.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Encaixe os parafusos na roda.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Abaixo o carro com o macaco.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Aperte os parafusos.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Retire o macaco de baixo do carro.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Guarde o macaco.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Guarde a chave.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("Guarde o pneu furado.");
    printf("\nDeu certo? (1 = sim, 0 = nao)\n");
    scanf("%d", &opcao);
    pontuacao_obtida += (opcao * pontuacao_por_etapa);

    printf("\nSua pontuacao foi de %f", pontuacao_obtida);
}