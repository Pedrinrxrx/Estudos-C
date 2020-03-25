#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{  
    /*trocando valores com o ponteiro*/
   setlocale(LC_ALL,"Portuguese");
   
   int *ptr,i,max = 0,vet[5] = {44,12,96,31,28};
   
   ptr = vet;
   
   for(i=0;i<=4;i++)
   {
   
   	  if(*ptr > max)
	  max = *ptr;	
	  
	  
	  ptr++;
   
   }
   
   	printf("O maior numero do vetor é %d",*ptr);
   	
   }
   
   
