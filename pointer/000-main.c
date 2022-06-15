# include <stdio.h>
# include <stdlib.h>

int main() {
    
    // variaveis inteiras
    // *valor1 = ponteiro para um inteiro(endereço de memoria)  
    // valor2 = conteudo 50
    int *valor1, valor2 = 50;

    // err valor1 = valor2;    
    valor1 = &valor2;      // valor1 = endereço de memoria de valor2

    
    // variaveis string
    char *letra1, letra2 = 'g';

    // err letra1 = letra2;
    letra1 = &letra2;     // letra1 = endereço de memoria de letra2
 
    
    // printf() displays %p = ponteiro, %d = inteiro, %c = caracter 
    // endereço de memoria = hexadecimal
    printf("Conteudo da variavel valor2: %d\n", valor2);
    printf("Endereço de memoria de valor2: %p\n", &valor2);
    printf("Conteudo da variavel valor1: %p\n", valor1);
    printf("Conteudo da variavel valor1: %d\n", *valor1);
    
    printf("\n");
    
    // printf() displays
    printf("Conteudo da variavel letra2: %c\n", letra2);
    printf("Endereço de memoria de letra2: %p\n", &letra2);
    printf("Conteudo da variavel letra1: %p\n", letra1);
    printf("Conteudo da variavel letra1: %c\n", *letra1);

    return 0;
}