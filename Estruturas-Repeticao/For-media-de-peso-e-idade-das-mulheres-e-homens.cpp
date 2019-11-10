#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main ()
{
       setlocale(LC_ALL,"Portuguese"); 
       int pessoas;
       char sexo;
	   float altura,maior,menor,masculino,feminino,aux,aux1,mh,mm,total,x,z;
       //mh = media dos homens , mm = media das mulheres//       
       maior = 0;
       menor = 0;
       aux = 0;      
          for (pessoas=1; pessoas<=15; pessoas++)  {	                                            												
					printf (" Digite a  altura \n");
					scanf ("%f",&altura);
					printf ("\n  Digite seu sexo \n  M para Masculino \n  ou \n  F para Feminino \n");
					scanf ("%s",&sexo);																														
						if (pessoas==1) {							                
								maior=altura;
								menor=altura;																	
											}												 																		
					    else {
							    if (altura>maior) {									               
								maior = altura;		   												   
								                  } 									 
						        if (altura<menor) {									          											
							    menor = altura;											
							                      }
							  }									
						    sexo = tolower (sexo); 	
							if (sexo == 'm') {								 											
								masculino = masculino + 1;  											         
								aux = aux + altura;													 													 											   
										       }											   
							if (sexo == 'f') {											
											         feminino = feminino + 1;
											         aux1 = aux1 + altura;													 																					   
											   } 										   							                   													
                                                   }
             mh = aux/masculino;   
             mm = aux1/feminino;   
             if (masculino >= 1) 
	         masculino = (masculino*100)/15;			
		     if (feminino >= 1)
		     feminino = (feminino*100)/15;										        		 
		     printf ("\n A maior altura é %1.2f e a menor altura é %1.2f \n",maior,menor);	
		     printf ("\n A media de altura das mulhures é : %2.2f \n A media de altura dos homens é : %2.2f \n",mm,mh);
		     printf ("\n A porcentagem de homens no grupo é : %2.1f %% \n A porcentagem de mulheres é : %2.1f %% \n",masculino,feminino);						 
		     system ("pause");    
}









