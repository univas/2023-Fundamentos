#include <stdio.h>
#include <string.h>

int main(){
    char texto[101];

    // Ultima posicao sera o caracter final
    texto[100] = '\0';

    // Caracter que delimita o final da string
    //'\0'

    // As "" significam que o texto é uma string constante
    // "Um texto qualquer"

    /**
     * strcpy(string1, string2) => Copia string2 em string1
     * 
     * strcat(string1, string2) => Insere o conteúdo de string2 ao final de string1
     * 
     * string1 = "Marcos"
     * string2 = "Antonio"
     * strcat(string1, string2);
     * string1 = "MarcosA"
     * 
     * 
     * strlen(string1) => Retorna a quantidade de caracteres na string1
     * 
     * strcmp(string1, string2) => 
     * se string1 < string2 retorna < 0
     * se string1 > string2 retorna > 0
     * se string1 == strgin2 retorna 0
     * 
     * if(!strcmp(string1, string2)){
     *  printf("Sao iguais");
     * }
     * 
     * string1 == string2
     * 
     * string1 = "Marcos"
     * string2 = "Marcos"
     * 
     * strchr(string1, caracter) => Primeira ocorrência do caracter dentro da String
     * 
     * strchr("Marcos Antonio", 'A')
     * = 7
     * 
     * 
     * strstr(string1, string2) => Retorna a primeira ocorrência de string2 em string1
     * 
     * strstr("Marcos Antonio", "Antonio")
     * = 7
     * 
     * 
    */
}