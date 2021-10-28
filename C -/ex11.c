#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, c; 
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &a);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &c);
    if (a > c){
        printf("O numero maior e %.1f", a);
    }
    else if (a == c){
        printf ("Sao iguais");
        else {
            printf ("o numero maior e %.1f",c);
        }
            return 0;
}