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
        printf ("\n Digite qual exerc�cio de 1 a 9 voc� quer acessar : \n Digite 0 para sair \n");
        scanf ("%d",&opcao);       	
		switch (opcao) {		
		    case 1 : 
		               for (i=0; i<10; i++) {					 
					  vetorB[i] = vetorA[i];
					  printf ("\n O conte�do do vetor B na posi��o %d � : %d \n",i,vetorB[i]);					
			 		}
			          break;			  
			case 2 : 			
			         printf ("\n Digite um numero inteiro para multiplicar pelo VetorA \n");
					 scanf ("%d",&numero);			         			         		         
			        for (i=0;i<10;i++){									 
			         vetorB[i] = vetorA[i] * numero;			         
			          printf ("\n O resultado da multiplica��o do numero %d x %d (da posi��o %d do vetorA), � : %d \n",vetorA[i],numero,i,vetorB[i]);			          
                    }
			        break;
			case 3 : 			
			        printf ("\n O conte�do do vetor A nas posi��es 7 e 9 s�o : %d e %d \n",vetorA[7],vetorA[9]);
					break;								
			case 4 : 
			         for (i=0;i<10;i++) {					 
					     if (vetorA[i] == 50) 					  	 
					     ac = i; 					    
				    }					 
					 if (ac>=0 && ac<=10) 
					 printf ("\n O n�mero 50 est� na posi��o : %d \n",ac);				
					 else 
					 printf ("\n O vetor A n�o cont�m o n�mero 50 \n");				
					 break;
			case 5 : 
			         for (i=0;i<10;i++) {					 
					      if (vetorA[i] == 10) 
					      cont_num = cont_num + 1;					     					   
					 }			 		    
		                  if (cont_num>0)
						  printf ("\n A quantidade de vezes que o n�mero 10 aparece � : %d vezes \n",cont_num);						  
       					  else 
						  printf ("\n O vetor n�o cont�m o n�mero 10 \n"); 						  
						  break;	
		    case 6 : 
		             printf ("\n Digite um n�mero para conferir se o vetor o possui \n");
					 scanf ("%d",&numero);					 
					   for (i=0;i<10;i++) {					   
					     if (numero==vetorA[i]) 
					     ac = i; 					   					   
					   }					 
					  if (ac>=0&&ac<10)
					  printf ("\n A posi��o que cont�m o n�mero %d � : %d \n ",numero,ac);		              
		              else ("\n N�o cont�m o %d no vetorA \n",numero);		 
		              break;       
		    case 7 : 
			         for (i=0; i<10; i++) {					 
					   	pe = vetorA[i] * vetorB[i];					 
					    printf ("\n %d x %d = %d \n",vetorA[i],vetorB[i],pe);						
						result = result + pe;					 
				    }
					     printf ("\n A soma das multiplica��es � : %d \n",result);          
			             break;
             case 8 : 
                      for (i=0; i<10; i++) {					  
		               	if (vetorA[i]>maior)
						   maior = vetorA[i];	
						   posicao = i;	  
					  }
                        printf ("\n O maior n�mero do vetor � :%d \n A posi��o que este n�mero est� � :%d \n",maior,posicao); 		
		                   break;		  
			 case 9 :          
                      for (i=0;i<10;i++) {					  
					   printf ("\n VetorA na %d posi��o : %d \n",i,vetorA[i]);
					  }			    	                   
					  for (i=9;i>=0;i--) {					  
					  printf ("\n VetorA ordem inversa na posi��o %d : %d \n",i,vetorA[i]);					  
					  }  
	         case 10 :  
	                   for (i=0;i<10;i++) {					   
					   if (vetorA[i]%2==0) {
					   vetorPAR[i] = vetorA[i];
					   printf ("\n Os n�meros no vetorPAR s�o %d \n",vetorPAR[i]);					          			   
			         	}					   
				    }
					   printf ("\n------------------------\n");					   
					   for (i=0;i<10;i++) {					   
					    if (vetorA[i]%2!=0) {
					    vetorIMPAR[i] = vetorA[i];
					    printf ("\n Os n�meros no vetorIMPAR s�o %d \n",vetorIMPAR[i]);
	                     }                     					 
					  }							
		}								
				         system ("pause");
	}while(opcao!=0); 		 
}
