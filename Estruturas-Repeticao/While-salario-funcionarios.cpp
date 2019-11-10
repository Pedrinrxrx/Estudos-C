#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
   setlocale(LC_ALL,"Portuguese");   
      int funcionarios,cont,ac,ac1,ac2,ac3,ac0;
      float salario0,aumento,aumento1,salario1,soma,salario,salario2,aumento2,aumento3,salario3,media;      
      cont = 1;     
        printf ("Digite a quantidade de funcionarios \n");
        scanf ("%d",&funcionarios);           
         while (cont<=funcionarios) {	
         	printf ("\n Digite seu salário : ");
         	scanf ("%f",&salario);        	
         	  if (salario<=1000,00) {			   
			   aumento = salario * 0,035;
			   salario0 = salario + aumento;
			   ac = ac + 1;			   			   
			   }       	  
			  if (salario>=1001,00 && salario <=2500,00) {			  
			     ac0 = ac0 + 1;
			     aumento1 = salario * 0,03;
				 salario1 = salario + aumento1;				      			  
			  } 	        
	          if (salario>=2501,00 && salario<=4999,00) {		  
			       ac1 = ac1 + 1;
			       aumento2 = salario * 0,025;
			       salario2 = salario + aumento2;		       
			  }            
	          if (salario>=5000,00) {			  
			       aumento3 = salario * 0,025;
			       salario3 = salario + aumento3;			  		  
			  }     
	         if (salario3>5000,00) {		 
			     ac2 = ac2 + 1;	 
			 }          
             if (salario0<1000) {			 
			  ac3 = ac3 + 1;
			  media = media + salario0; 			 
			 }	      
	          soma = soma+salario0+salario1+salario2+salario3;	          
	          salario0 = 0;
	          salario1 = 0;
	          salario2 = 0;
	          salario3 = 0;               
              cont = cont + 1;  
	}       
          printf ("\n O total de salarios após o reajuste é : %f \n",soma);
          printf ("\n Os funcionarios que estão entre 1001,00 a 2500,00 antes do reajuste são : %d \n",ac0);
          printf ("\n O salario geral dos funcionarios que ganham mais de 5000 após o reajuste são : %f \n",salario2);
          printf ("\n Quantos funcionarios tiveram aumento entre 2501 a 5000 são : %d \n",ac1);
          printf ("\n A media dos salarios abaixo de 1000 depois do reajuste é : %f \n",media/ac);
}
