#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, multiplica, divisao, fareh; 
    printf ("digite a temperatura em graus Celsius para obter Fahrenheit: ");
    scanf ("%f", &a);
    multiplica = a * 9;
    divisao = multiplica / 5;
    fareh = divisao + 32;
    printf ("A area do triangulo e igual a %f", fareh);
    return 0;
}