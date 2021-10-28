#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, altura, imc;
    printf ("Digite o peso para o calculo do IMC: ");
    scanf ("%f", &a);
    printf ("Digite a altura para o calculo do IMC: ");
    scanf ("%f", &b);
    altura = b*b;
    imc = a / altura;
    printf ("O IMC calculado e %f", imc);
    return 0;
}