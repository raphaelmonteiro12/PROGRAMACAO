#include <stdio.h>
int main(){
    int n,i,a=0;
    printf("Digite valor N, deve ser positivo menor que cem: ");
    scanf("%i",&n);

    while (n<=0 || n >=100)
    {
        printf("Erro!!, valor N dever ser positivo e menor que cem \n\n Digite novamente:");
        scanf("%i",&n);
    }
    for (i = i+2; i < n; i++);
    {
   

        printf("%i, ",i);

    }
    
    return 0;

}