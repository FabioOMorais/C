#include <stdio.h>
#include <stdlib.h>

int main(){

    int ij, iv, idade;

    ij = 17;
    iv = 60;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

        if(idade <= ij){
            printf("Voce e uma pessoa jovem.");
        }

        else{
            if(idade >= iv){
                printf("Voce e uma pessoa idosa");
            }
        }

        else{
            if( (idade > ij) && (idade < iv) ){
                printf("Voce e uma pessoa adulta");
            }
        }










    return(EXIT_SUCCESS);
}