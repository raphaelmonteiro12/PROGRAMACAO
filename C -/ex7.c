#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float a, b, c, d, e, soma, ss, troco; 
    printf ("digite o valor do produto 1: ");
    scanf ("%f", &a);
    printf ("digite o valor do produto 2: ");
    scanf ("%f", &b);
    printf ("digite o valor do produto 3: ");
    scanf ("%f", &c);
    printf ("digite o valor do produto 4: ");
    scanf ("%f", &d);
    printf ("digite o valor do produto 5: ");
    scanf ("%f", &e);
    printf ("Quanto foi dado para pagamento: ");
    scanf ("%f", &ss);
    soma = a+b+c+d+e;
    troco = ss - soma;
    printf ("A soma de todos os produtos e %f e o troco e %f", soma,troco);
    return 0;
}