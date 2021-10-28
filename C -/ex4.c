#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, c, d, soma, media; 
    printf ("digite o primeiro numero: ");
    scanf ("%f", &a);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &b);
    printf ("Digite o terceiro numero: ");
    scanf ("%f", &c);
    printf ("Digite o quarto numero: ");
    scanf ("%f", &d);
    soma = a + b + c + d ;
    media = soma / 4;
    printf ("A media aritimetica e %f", media);
    return 0;
}