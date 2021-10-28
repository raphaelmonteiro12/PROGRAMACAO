#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b; 
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &a);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &b);
    if (a > b){
        printf("O numero maior e %.1f", a);
    }
    else {
        printf ("o maior numero e %.1f", b);
    }
    return 0;
}