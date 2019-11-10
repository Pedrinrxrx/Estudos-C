#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()

{
    setlocale (LC_ALL,"Portuguese");
    
    int total = 0,matriz[3][5],i,j,vet_soma[3]= {0,0,0},soma0,soma1,soma2;
	
	
	for (i=0;i<3;i++) {
	   for (j=0;j<5;j++) {
	   
	     printf ("\n Digite o número %d na linha %d \n",j,i);
	     scanf ("%d",&matriz[i][j]);
	     
	     vet_soma[i] = vet_soma[i] + matriz[i][j];
	     
		      
	   } 
       total = total + vet_soma[i];
    }
		for (i=0;i<3;i++){
		   for (j=0;j<5;j++){
		   	   
		   printf (" %d ",matriz[i][j]);

		   }    
		    printf (" = %d \n",vet_soma[i]); 
		    printf ("\n");
		    
	}
	      printf ("\n total = %d ",total);
	
	
}









