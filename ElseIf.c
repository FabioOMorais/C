#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, r;
     
    
    printf("\n Digite o primeiro valor: \t");
    scanf("%f", &a);
        
        if(a < 0){
         
         printf("\n Numeros negativos sao invalidos, Tente Novamente! \t");
         printf("\n Digite o primeiro valor: \t");
         scanf("%f", &a);  
       }    

    printf("\n Digite o segundo valor: \t");
    scanf("%f", &b);
    
        if(b < 0){
         
         printf("\n Numeros negativos sao invalidos, Tente Novamente! \t");
         printf("\n Digite o segundo valor: \t");
         scanf("%f", &b);  
       }    

    r = a + b;

    printf("\n O resultado sera: \t %f", r);


return EXIT_SUCCESS;
}