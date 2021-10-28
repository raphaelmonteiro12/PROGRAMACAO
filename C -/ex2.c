#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int a, soma; 
    printf ("digite o tamanho de uma aresta do quadrado para saber sua area: ");
    scanf ("%i", &a);
    soma = a * a;
    printf ("A area do triangulo e igual a %i", soma);
    return 0;
}