#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()

{
    setlocale (LC_ALL,"Portuguese");
    
	int cont_alt = 0,camisa,ac = 0,matriz_alt_jog[2][11],i,vet_aux1[11] = {0,0,0,0,0,0,0,0,0,0,0},j;
	float soma1 = 0,soma2 = 0,altura,media_alt1 = 0,media_alt2 = 0,maior = 0,menor = 3,camisa_10,camisa_7;
	
	for (i=0;i<2;i++){
      ac = ac + 1;  
	  printf ("\n *** Time %d *** \n",ac);  	  
	  
	   for (j=0;j<11;j++){
	   
	       printf ("\n Digite a %d altura do time %d  \n",j + 1,i+1);
	       scanf ("%f",&altura);
	       printf ("\n e o número da camisa : \n");
	       scanf ("%d",&camisa);
           
		    if (i==0) {		    
		     soma1 = soma1 + altura;
		   
		      if (maior<altura)
		      maior = altura;
		   
		      if (menor>altura)
		      menor = altura; 
		   
		      if (camisa==10)
		      camisa_10 = altura;
		   
		      if (altura>1.75)
		      vet_aux1[j] = camisa; 
		    
		    }
			
			else 
			   if (i==1) {
			   soma2 = soma2 + altura;
			   
			   if (camisa==7)
			   camisa_7 = altura;
			   
			   if (altura>1.80)
		       cont_alt = cont_alt + 1;

			  }  
		   
	       } 
		   	   	   
	   } 
	      media_alt1 = soma1/11;
	      media_alt2 = soma2/11;
	      

	      
	      printf ("\n A média de altura do time 1 é : %1.2f \n A média de altura do time 2 é : %1.2f \n",media_alt1,media_alt2);
	      printf ("\n A maior altura do time 1 é : %1.2f , e a menor é : %1.2f \n",maior,menor);
	      printf ("\n A altura do camisa 10 do time 1 é : %1.2f , e a altura do camisa 7 do time 2 é : %1.2f \n",camisa_10,camisa_7);
		  
		  for (j=0;j<11;j++) {
		     
	          if (vet_aux1[j] > 0){
		      printf ("\n Jogador %d camisa %d do time 1 tem uma altura maior que 1,75 \n",j,vet_aux1[j]);
		  
               }
		    }
  
	         printf ("\n A quantidade de jogadores que tem mais de 1,80 no time dois são : %d \n",cont_alt);
		    
 
}
	
