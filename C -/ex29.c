#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{ int sum=0;

   for(int i=1; i<=100; i++)
   {
      // adding 1 to 100 numbers
      sum=sum+i;
   }
   printf("A soma dos numero de 1 a 100 e : %i",sum); 
 
    return 0;
}