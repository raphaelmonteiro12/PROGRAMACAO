#include <stdio.h>
#include <math.h>
int main(){
    int i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i",&i);

    while(i<=0){
        printf("Erro !, apenas numero positivos maiores que 0 \n digite novamente: ");
    scanf("%i",&i);

    }

    printf("\nobrigado e vai com deus\n");

}