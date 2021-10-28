#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, dolar; 
    printf ("digite a cotacao atual do dolar: ");
    scanf ("%f", &a);
    printf ("Digite a quantidade de dolares a serem calculados: ");
    scanf ("%f", &b);
    dolar = a * b;
    printf ("Em reais, com a cotacao atual, %f dolares sao equivalentes a %f em reais", b, dolar);
    return 0;
}