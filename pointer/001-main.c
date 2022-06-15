# include <stdio.h>
# include <stdlib.h>


void imprimirVetor(int *v, int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
}

void imprimirVetorLetras(char *c, int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%c ", *(c + i));
    }
    printf("\n");
}

// trabalhando com vetores
int main() {
    
    int i, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char letras[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

/*
                    // vet = &vet[0] = endereço de memoria de vet
    // printf("%p\t%p\n", vet, &vet[0]);

    for (i = 0; i < 10; i++) {

        // endereços de memoria de vet[i]
        printf("%d\n", &vet[i]);

        // conteudos de memoria de vet[i]
        printf("%d\n", vet[i]);

        // aritmetica de ponterios
        printf("%d\n", *(vet + i));

    }

*/

    imprimirVetor(vet, 10);
    
    imprimirVetorLetras(letras, 10);

    return 0;
}