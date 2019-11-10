#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL,"Portuguese");	
	float n1,n2,n3,divisor,result,result1,soma;
      n1 = 37;
	  n2 = 38;	  
	      for (divisor = 1;divisor <=37; divisor++) {	  
	                   result = (n1 * n2)/divisor;  	                      
	                printf ("\n %f * %f / %f = %f \n \n",n1,n2,divisor,result);   	  	  
	                    n1 = n1 - 1;
	                    n2 = n2 - 1;		                    	                    
	                    result1 = result1 + result;                          	  
     	                                            }          
          printf ("\n O resultado dessa equação será : %f \n",result1);        
}
