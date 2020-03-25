#include <stdio.h>
#include<stdlib.h>


const int MAX = 10;	

int main()
{
	int maior = -1,result,i,v[1] ={55000},a=10,*ptr,vet[] = {10,9,2,6,4,15,8,4,1,0},*pnt;
	
	   printf("\n Exercicio 1 \n");
	   
	   result = v[0] + 8 * 3;
	   
	   printf("\n O valor de v + 3 = %d \n",result);
	
	
	
	printf("\n------------------------\n");
	
	printf("\n Exercicio 2\n");
	
	 ptr = &a;
	 (*ptr)++;
	 (*ptr)++;
	 ++(*ptr);  
	 printf("\n O Valor que final foi : %d", a);
	 
	 printf("\n------------------------\n");
	
	printf("\n Exercicio 3 \n");
	
	pnt = vet;
	
	for(i=0;i<=MAX;i++){
		
		if(maior < vet[i]){
		
		 maior = *pnt;
		
		}
		
		*pnt++;
		
	}
	
	  printf("\n %d \n",maior);

	return 0;
}
