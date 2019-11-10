#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int numero,tabuada,numero1,opcao;     
 do {   
      printf ("\n Digite um numero para realizacao da tabuada maior que 0 \n");
      scanf ("%d",&numero);	         
        if (numero <=0)  {	        
			printf ("Digite um numero maior que 0 \n");					
		               	 }	
        else {    	
      printf ("Digite [1] para adicao \n");
      printf ("Digite [2] para multiplicacao \n");
	  printf ("Digite [3] para sair \n");
	  scanf ("%d",&opcao);	 
             for (numero1 = 1; numero1 <=10; numero1++) {		            
					switch (opcao) {                 
			              case 1 :	
				                    tabuada = numero + numero1;	
				                    printf (" %d + %d = %d \n",numero,numero1,tabuada);	
				           break;			                                                 																								
				          case 2 :  tabuada = numero * numero1;																												
								    printf (" %d * %d = %d \n",numero,numero1,tabuada);							
						   break;			   
						   default : 			            
									if (opcao!=3) {		          		
										  printf ("ERRO \n");				          
							       break;				
								}										
						}									
                }
       }
    }  while (opcao != 3 ); 
   system ("pause \n");                      
}
