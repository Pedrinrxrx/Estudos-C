#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
int main ()
{   
	int pessoas,mulheres,homens,idade,ac=0,ac1 = 0,idad,cont = 0;
    float peso,media_idade,media_peso,pes;
    char sexo;
    printf ("\n Digite a quantidade de pessoas : \n");
    scanf ("%d",&pessoas);
        do {               
		    printf ("\n Digite a idade : \n");
		    scanf ("%d",&idade);
			printf ("\n Digite o peso : \n");
		    scanf ("%f",&peso);
		    printf ("\n Digite o sexo 'm' para masculino 'f' para feminino : \n");
		    scanf ("%c",&sexo);		  		 		
		       if (sexo == 'm') {			     
			     if (peso>0) {			 			   
			       pes = pes + peso;			   
			          if (peso>80) 
			          ac = ac + 1;
		          }			   
			   } 		       
                if (sexo == 'f') {			         
			         if(idade>0) {			           
					   idad = idad + idade;			  
			            if (idade>25)
			            ac1 = ac1 + 1;
			        }			  
			    }      cont = cont + 1;			  
			}while (cont>=pessoas);		     
               media_idade = (idad/ac1);
			   media_peso = pes/ac; 
             printf ("\n A média de peso dos homens é : %f \n",media_peso);
			 printf ("\n A quantidade de homens com peso maior que 80 é : %d \n",ac);
			 printf ("\n A média da idade das mulheres é :%f",media_idade);
			 printf ("\n A quantidade das mulheres com idade superior a 25 é %d",ac1);
   }
