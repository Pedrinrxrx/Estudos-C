#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
   setlocale(LC_ALL,"Portuguese"); 
   int ac_cand1=0,ac_cand2=0,ac_cand3=0,eleitores,cont = 1,voto_branco=0,voto_nulo=0,opcao;
   float porcent_cand1=0,porcent_cand2=0,porcent_cand3=0,porcent_nulo=0,porcent_branco=0;   
               printf ("\n Digite a quantidade de eleitores \n");
               scanf ("%d",&eleitores);				
		do {		         
		         system ("cls");		      
			  printf ("\n Escolha um candidato a presidência \n");
		      printf ("\n [1] Haddad \n");
		      printf ("\n [2] Bolsonaro \n");
		      printf ("\n [3] Ciro Gomes \n");
		      printf ("\n [4] Voto em Branco \n");
		      printf ("\n [--] Digite um numero invalido para votar nulo\n");
              scanf ("%d",&opcao);  			             
                switch (opcao) {				
				     case 1: ac_cand1 = ac_cand1 + 1;
				             break;					 					  
				     case 2 : ac_cand2 = ac_cand2 + 1;
				             break;					 
					 case 3 : ac_cand3 = ac_cand3 + 1; 
					           break;					 
					 case 4 : voto_branco = voto_branco+1;
					          break;				
				     default : 
				                voto_nulo = voto_nulo + 1; 				                 
				               if (ac_cand1>ac_cand2||ac_cand1>ac_cand3)
				                   ac_cand1 = ac_cand1 + 1;			                   
				               else 
							        if (ac_cand2>ac_cand1||ac_cand2>ac_cand3)    
				                        ac_cand2 = ac_cand2 + 1; 
										else 
										     if (ac_cand3>ac_cand1||ac_cand3>ac_cand2)
											 ac_cand3 = ac_cand3 + 1; 
								break;			  
				 } 		                   
		              cont = cont + 1;		           		                           
		}while (cont<=eleitores);           
               porcent_cand1 = (ac_cand1*100)/eleitores;
               porcent_cand2 = (ac_cand2*100)/eleitores;
			   porcent_cand3 = (ac_cand3*100)/eleitores;
			   porcent_branco = (voto_branco*100)/eleitores;
			   porcent_nulo = (voto_nulo*100)/eleitores;  		   
			   printf ("\n A %% de eleitores que votaram no candidato 1 foi : %2.1f \n",porcent_cand1);
			   printf ("\n A %% de eleitores que votaram no candidato 2 foi : %2.1f \n",porcent_cand2);
			   printf ("\n A %% de eleitores que votaram no candidato 3 foi : %2.1f \n",porcent_cand3);
			   printf ("\n A %% de eleitores que votaram branco foi : %2.1f \n",porcent_branco);
			   printf ("\n A %% de eleitores que votaram nulo foi : %2.1f \n",porcent_nulo);			    
}
