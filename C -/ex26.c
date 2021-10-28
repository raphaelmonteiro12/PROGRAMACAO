   
#include <stdio.h>
#include <math.h>

void main() {

    int a;
    printf("Digite um numero inteiro positivo para obter a tabuada do mesmo: ");
    scanf("%i",&a);

    while(a<=0){
        printf("Erro !, digite apenas numero positivos maiores que 0 \n digite novamente: ");
    scanf("%i",&a);

    }
    for (int i=1 ; i <=10 ; i++)
    {
        printf("\n%i x %i = %i\n",a,i,a*i);
    }
    
}