#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{  
    /*trocando valores com o ponteiro*/
   setlocale(LC_ALL,"Portuguese");
   
    int i,max = 0;
    char *ptr,vet[5] = {'a','b','c','d','e'};
    
    ptr = vet;
    
    for(i=0;i<=4;i++)
	{
		printf("\n vet[%d] %c ptr = %c",i,vet[i],*ptr);
		ptr++;
	
	}
	
}
    
