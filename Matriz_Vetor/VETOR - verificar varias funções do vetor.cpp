#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
    setlocale(LC_ALL,"Portuguese");	
	int cont_par = 0,cont_impar = 0,maior,pe,posicao,result,numero,ac,cont_num,i,j,opcao,escolha,vetorA[10] = {15,35,48,50,2,6,5,96,24,13},vetorB[10] = {0},vetorPAR[10] = {0},vetorIMPAR[10] = {0};    
    do {
	    system ("cls");	      
        numero = 0;
        ac = -1;
        cont_num = 0;
        maior = 0;                
		 for (i=0; i<10; i++) {					 
					  vetorB[i] = vetorA[i];  					
		    }  
        printf ("\n Digite qual exercício de 1 a 9 você quer acessar : \n Digite 0 para sair \n");
        scanf ("%d",&opcao);       	
		switch (opcao) {		
		    case 1 : 
		               for (i=0; i<10; i++) {					 
					  vetorB[i] = vetorA[i];
					  printf ("\n O conteúdo do vetor B na posição %d é : %d \n",i,vetorB[i]);					
			 		}
			          break;			  
			case 2 : 			
			         printf ("\n Digite um numero inteiro para multiplicar pelo VetorA \n");
					 scanf ("%d",&numero);			         			         		         
			        for (i=0;i<10;i++){									 
			         vetorB[i] = vetorA[i] * numero;			         
			          printf ("\n O resultado da multiplicação do numero %d x %d (da posição %d do vetorA), é : %d \n",vetorA[i],numero,i,vetorB[i]);			          
                    }
			        break;
			case 3 : 			
			        printf ("\n O conteúdo do vetor A nas posições 7 e 9 são : %d e %d \n",vetorA[7],vetorA[9]);
					break;								
			case 4 : 
			         for (i=0;i<10;i++) {					 
					     if (vetorA[i] == 50) 					  	 
					     ac = i; 					    
				    }					 
					 if (ac>=0 && ac<=10) 
					 printf ("\n O número 50 está na posição : %d \n",ac);				
					 else 
					 printf ("\n O vetor A não contém o número 50 \n");				
					 break;
			case 5 : 
			         for (i=0;i<10;i++) {					 
					      if (vetorA[i] == 10) 
					      cont_num = cont_num + 1;					     					   
					 }			 		    
		                  if (cont_num>0)
						  printf ("\n A quantidade de vezes que o número 10 aparece é : %d vezes \n",cont_num);						  
       					  else 
						  printf ("\n O vetor não contém o número 10 \n"); 						  
						  break;	
		    case 6 : 
		             printf ("\n Digite um número para conferir se o vetor o possui \n");
					 scanf ("%d",&numero);					 
					   for (i=0;i<10;i++) {					   
					     if (numero==vetorA[i]) 
					     ac = i; 					   					   
					   }					 
					  if (ac>=0&&ac<10)
					  printf ("\n A posição que contém o número %d é : %d \n ",numero,ac);		              
		              else ("\n Não contém o %d no vetorA \n",numero);		 
		              break;       
		    case 7 : 
			         for (i=0; i<10; i++) {					 
					   	pe = vetorA[i] * vetorB[i];					 
					    printf ("\n %d x %d = %d \n",vetorA[i],vetorB[i],pe);						
						result = result + pe;					 
				    }
					     printf ("\n A soma das multiplicações é : %d \n",result);          
			             break;
             case 8 : 
                      for (i=0; i<10; i++) {					  
		               	if (vetorA[i]>maior)
						   maior = vetorA[i];	
						   posicao = i;	  
					  }
                        printf ("\n O maior número do vetor é :%d \n A posição que este número está é :%d \n",maior,posicao); 		
		                   break;		  
			 case 9 :          
                      for (i=0;i<10;i++) {					  
					   printf ("\n VetorA na %d posição : %d \n",i,vetorA[i]);
					  }			    	                   
					  for (i=9;i>=0;i--) {					  
					  printf ("\n VetorA ordem inversa na posição %d : %d \n",i,vetorA[i]);					  
					  }  
	         case 10 :  
	                   for (i=0;i<10;i++) {					   
					   if (vetorA[i]%2==0) {
					   vetorPAR[i] = vetorA[i];
					   printf ("\n Os números no vetorPAR são %d \n",vetorPAR[i]);					          			   
			         	}					   
				    }
					   printf ("\n------------------------\n");					   
					   for (i=0;i<10;i++) {					   
					    if (vetorA[i]%2!=0) {
					    vetorIMPAR[i] = vetorA[i];
					    printf ("\n Os números no vetorIMPAR são %d \n",vetorIMPAR[i]);
	                     }                     					 
					  }							
		}								
				         system ("pause");
	}while(opcao!=0); 		 
}
