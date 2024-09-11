#include <stdio.h>

int main(){
    char letra = 'a'; // Declarei minha primeira variável

    letra = 'b'; // Aspas simples para representar um único caracter.

    int numero = 10;
    numero = 20;

    float numero_decimal = 10.5;

    numero_decimal = 10; // 10.0

    double numero_decimal_preciso = 20.05; // double permite usar mais casas decimas que o float


    // letras, dígitos ou _
    // primeiro caracter não pode ser um dígito 9idade (X); idade9 (OK)
    // int int; (X não posso ter variável com nome sendo uma palavra reservada)





        //int idade; // OK
        //int Num_Cliente; // OK
        //float a1b2c3; // OK
        //float 7a2bc3c; // (X)
        //char float; // (X)
        //double vinte%; // (X)
        //char sim?nao; // (X)
        //int _alfa; // OK -- não é aconselhavel
        //int _123; // OK -- não é aconselhavel
        //char Num, NUM; // OK - Case sensitive
        //char Num, Num; // (X) - pois tenho duas variáveis com mesmo nome



        // padrões de nomenclatura
        int numero_1, numero_um; //
        int numero1, numeroUm; // camelCase



        printf("Impressao dos valores\n\n");
        // escrever um numero inteiro
        printf("Numero: %d\n\n", numero);

        // escrever um numero de ponto flutuante
        printf("Numero: %f\n\n", numero_decimal);

        // limitar a quantidade de casas decimais
        printf("Numero: %.2f\n\n", numero_decimal);

        // escrever uma variavel char
        printf("Letra: %c\n\n", letra);



    /**
        + => Adição (resultado = numero1 + numero2)
        - => Subtração (numero1 - numero2)
        / => Divisão
        * => Multiplicação
        % => Resto da divisão
     */

}