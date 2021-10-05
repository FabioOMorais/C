#include <stdio.h>
#include <stdlib.h>

int main(){

    char c;



    printf("Digite o valor 1: \n");
    scanf("%c", &c);

    if(c == "1"){

        printf("Valor digitado correto");
    }
    else{
        printf("O valor %c esta incorreto", c);
    }






    return EXIT_SUCCESS;
}