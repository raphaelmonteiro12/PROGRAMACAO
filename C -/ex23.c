#include <stdio.h>
#include <math.h>

void main(){
    int a,b;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%i",&a);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%i",&b);
while (a>b){
    printf("O segundo deve ser maior que o primeiro ! \n Digite novamente o segundo valor: ");
    scanf("%i",&b);
}
printf("\nObrigado e vai com deus\n");

}