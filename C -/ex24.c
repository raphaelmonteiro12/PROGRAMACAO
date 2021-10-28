#include <ctype.h>
#include <stdio.h>
#include <math.h>

void main(){
    char sexo;
    printf("F para feminino e M para masculino\n");

    printf("Entre o seu sexo: ");
    scanf("%s",&sexo);

  
    while((toupper(sexo) != 'F') && (toupper(sexo) != 'M')){
        printf("\napenas F ou M e resposta valida \n Digite novamente o seu sexo: ");
        scanf("%s",&sexo);

    }
    if(sexo == 'M'){
        printf("\nVoce e homem\n");
        
    }
    else if (sexo == 'F'){
        printf("\nVoce e mulher\n");
    }
    

   
}