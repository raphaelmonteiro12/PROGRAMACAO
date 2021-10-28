#include <stdio.h>
#include <math.h>

void main() {
    char sexo;
    float height, wheight, imc;

  
    printf("Digite seu sexo: \n F para feminino \n M para masculino \n");
    scanf("%c",&sexo);
    printf("\n Sua altura em metro: ");
    scanf("%f",&height);
    printf("\n Seu peso em kg: ");
    scanf("%f",&wheight);

    imc = wheight/pow(height,2);

    printf("Seu IMC e %.2f \n",imc);
    if (sexo == 'F' || sexo == 'f'){
        printf("Sexo: feminino");

    }

}