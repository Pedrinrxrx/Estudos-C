#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
   setlocale (LC_ALL,"");   
   int opcao = 0,i,j,cont_nao = 0;
   float matriz_nota[10][4],vetor_media_aluno[10] = {0,0,0,0,0,0,0,0,0,0},media_sala = 0;
   long int proc_RA,vetor_RA[10] = {0,0,0,0,0,0,0,0,0,0},aux,x,v;  
 do{
 	printf ("\n ***** Digite uma opção ***** \n");
    printf ("\n [1] Entrada de dados \n");
    printf ("\n [2] Pesquisa de RA \n");
    printf ("\n [3] Relatorio dos RAs \n");
    printf ("\n [4] Fim \n");
    scanf ("%d",&opcao);	 	
      switch (opcao){
	        case 1 : 
			    for (j=0;j<=9;j++){				 
				       while (vetor_RA[j] <= 0) {  
				       printf ("\n Digite o %dº RA : \n",j+1);
				       scanf ("%li",&vetor_RA[j]);				     
					  }				        
				 } 				 
				for (j=0;j<=9;j++){
				    for (i=0;i<4;i++){				    	
				    	matriz_nota[j][i] = -1;
				    }
			     }				 				 
				 for (j=0;j<=9;j++){
				    for (i=0;i<4;i++){					    
					    while (matriz_nota[j][i] < 0 || matriz_nota[j][i] > 10 ){						
					    printf ("\n Digite a [%dº] nota do [%dº] aluno\n",i + 1,j + 1);
					    scanf ("%f",&matriz_nota[j][i]);
				         }
						vetor_media_aluno[j] = (matriz_nota[j][0] + matriz_nota[j][1] + matriz_nota[j][2] + matriz_nota[j][3])/4;     										
					}				 
				 } 				  
				 for (j=0;j<=9;j++) {				  
                 media_sala = media_sala + vetor_media_aluno[j];  				  	            				 
                 } 
                 break; 				 
			case 2 : 
			         printf ("\n Digite o RA que quer encontrar \n");
					 scanf ("%li",&proc_RA);					 
					 for (j=0;j<9;j++){					 
					    if (proc_RA == vetor_RA[j]){
					    printf ("\n RA pertence ao [%dº] aluno , sua média é %f ",j + 1,vetor_media_aluno[j]);
					    }
					    else{
					    cont_nao = cont_nao + 1;	        
	                    }
					 }	     
					    if (cont_nao == 10)
					    printf ("\n Aluno não encontrado \n");
			break;		    						
			case 3 : 			         					 
					 for (j=0;j<=8;j++){
					   for (i=j+1;i<=9;i++){
					    if (vetor_RA[j] > vetor_RA[i]) {
						  aux = vetor_RA[j];
						  vetor_RA[j] = vetor_RA[i];
					      vetor_RA[i] = aux;
					   }
				    }
			     }
					    printf ("\n A ordem númerica dos RAs é : \n");					
						for (j=0;j<=9;j++) 
						   printf ("\n %dº RA : %li / média : %f \n",j+1,vetor_RA[j],vetor_media_aluno[j]);					      
   						   system ("pause>null");				    						
			case 4 : 
			    printf ("\n *** FIM *** \n");			    		   
	     }	 
    }while(opcao!=4);	
}               
