#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

        if(idade <= 18){
            printf("Voce e menor de idade");
        }

        else{
            printf("Voce e maior de idade");
        }
        
return 0;
}
