  
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
 float peso, altura, r;

    printf("Digite o Peso: ");
    scanf("%f", &peso);

    printf("Digite a Altura: ");
    scanf("%f", &altura);

    r=peso/(altura*altura);
    
    printf("Referencia = %.2f",r);

    if (r<=20)
   
    {
      printf("\nAbaixo do peso");
    }
         
    else
    {
       if (r<=25)
       {
         printf("\nPeso Ideal");
       }
          
       else
       {
         printf("\nAcima do peso");
       }
   }  
    

  return(0);
}