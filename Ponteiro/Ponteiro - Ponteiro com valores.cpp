#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{  
   /*vetores com ponteiro*/
   setlocale(LC_ALL,"Portuguese");
  
   int *ptr,i,vet[5] = {44,12,96,31,28};
   
   ptr = vet;
 
   for(i=0;i<=4;i++)
   {
   
      printf("\n Vet[%d] eh %d ptr = %d",i,vet[i],*ptr);
      ptr++;
   
   }
  
  
}
