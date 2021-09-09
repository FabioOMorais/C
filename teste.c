#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c;

    printf("\n Digite uma letra em minusculo: \t");
    scanf("%c", &c);

        if(c >= 'a'){

        printf("\n Letra digitada em maiusculo: %c\t", toupper( c ) );
        
        }
    

    return EXIT_SUCCESS;
    
}