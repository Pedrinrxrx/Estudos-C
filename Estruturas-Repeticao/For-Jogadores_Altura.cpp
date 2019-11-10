#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int cont1,cont2,cont3,jog,idade,media;
	float altura,ac;	
    //mg = media geral//
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    ac = 0;
    for (jog=1; jog<=11; jog++) {	
	    printf ("Digite sua idade  : \n");
	    scanf ("%d",&idade);	    
	    printf ("Digite sua altura : \n");
	    scanf ("%f",&altura);
        if (altura>1.80) {	                      				
			 cont1 = cont1 + 1;	   				         
		}		
		if (idade>=25)   {		
		     cont2 = cont2 + 1;
		 }    				  									  
		if ((altura<=1.80)&&(idade<=18)) {							                   
             cont3 = cont3 + 1;     
	    }	                         
	       ac = ac+idade;		                        
	    }	                     
	      media = ac/11;               	                     
        printf ("A quantidade de jogadores com altura acima de 1.80 eh : %d \n",cont1);
		printf ("A quantidade de jogadores com a idade acima ou igual a 25 eh : %d \n",cont2);
		printf ("A quantidade de jogadores com altura abaixo ou igual a 1.80 e idade inferior a 18 anos eh: %d \n",cont3);
		printf ("A media de idade do time eh : %d",media);	                             
}



