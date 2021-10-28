#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, area; 
    printf ("digite o tamanho da largura o terreno: ");
    scanf ("%f", &a);
    printf ("digite o comprimento o terreno: ");
    scanf ("%f", &b);
    area = a*b;
    if (area < 100){
       printf ("A area do terreno e pequena"); 
    }
    else {
        printf ("A area do terreno e grande");
    }
    return 0;
}