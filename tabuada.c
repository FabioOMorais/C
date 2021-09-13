#include <stdio.h>
#include <stdlib.h>

int main(){

    int contador;
    int n;

    printf("Escolha um numero da tabuada: \n");
    scanf("%i", &n);

    for(contador = 1; contador <= 10; contador++){


        printf("%ix%i=%i\n", n, contador, contador*n);
    }

    return EXIT_SUCCESS;
}