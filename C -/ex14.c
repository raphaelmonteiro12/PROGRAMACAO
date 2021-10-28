#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, d; 
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &a);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &b);
    printf ("Digite o terceiro numero: ");
    scanf ("%f", &d);
    if (a < b > d){
        printf("O numero maior e %.1f", b);
    }
    if else (b < a > d) {
        printf("O numero maior e %.1f", a);
    }
    else{
        printf("O numero maior e %.1f", d);
    }
    return 0;
}