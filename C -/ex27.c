#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &x);

    while(x<0){
    printf("Somente numero postivos\n Digite novamente: ");
    scanf("%i", &x);

    }

    int interval;
    int interval2;

    printf("Qual o inicio do intervalo de tabuada deseja calcular para %i ?  ",x);
    scanf("%i", &interval);
    printf("Qual o final do intervalo de tabuada deseja calcular para %i ?  ",x);
    scanf("%i", &interval2);

    while(interval>interval2){
        printf("O intervalo final deve ser maior que o inicial\n\n Digite novamente: ");
        scanf("%i", &interval2);
    }

    for(int i=interval; i<=interval2;i++){
        printf("%i x %i = %i\n",x,i,x*i);
    }

    return 0;
}