#include <stdio.h>
int main()
{
      float a=-1, b=1, c= 1;

      printf("Sequencia dos 20 primeiro do Bergamaschi e: \n");
  
      for(int i=0 ; i<20 ; i++){  
         int r = a+b+c;
          c=b;
          b=a;
          a=r;
                
     printf("%i\n",r);
      }  
    
   return 0;
}