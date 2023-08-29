#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float delta;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    printf("Digite o valor de C:\n");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);

    printf("O resultado de delta eh: %.2f", delta);
}