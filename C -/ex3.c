#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, soma; 
    printf ("digite o tamanho da base: ");
    scanf ("%f", &a);
    printf ("Digite a altura: ");
    scanf ("%f", &b);
    soma = a * b / 2;
    printf ("A area do triangulo e igual a %f", soma);
    return 0;
}