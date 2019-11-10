 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>
 #include <locale.h>
 int main ()
 
 
{
    setlocale (LC_ALL,"Portuguese");
	
	int idade,pessoas=0,cont = 1,cont_m = 0,cont_h = 0,cont_classec = 0,cont_classeb = 0,cont_classea = 0,cont_c = 0,cont_a = 0,cont_ad = 0;
	char sexo,opcao;
	float soma = 0,total=0,renda=0,porc_homens=0,porc_mulheres=0,porc_criancas=0,porc_adolescentes=0,porc_adultos=0,porc_classea=0,porc_classeb=0,porc_classec=0;
    
	  opcao = 's';	
	  opcao = tolower(opcao);
	    
	
	do {
	
	   
	    do {
		     
			  printf ("\n Digite a idade : \n");
			  scanf ("%d",&idade);
			  printf ("\n Digite o sexo  F para feminino  M para masculino : \n");  
	          scanf ("%s",&sexo);
			  sexo = toupper(sexo);
			  printf ("\n Digite sua renda (numero de salarios minimos) \n");
			  scanf ("%f",&renda);
			  
			if(idade>0) {
			
			  	if (sexo = 'F') 
			  	    cont_m = cont_m + 1;
			  
			    else 
 			  	     if (sexo = 'M')
			  	     cont_h = cont_h + 1;
			  	
			  	
				if (idade<=12)
				cont_c = cont_c + 1;
				
				else 
				     if (idade>=13&&idade<=17)
				     cont_a = cont_a + 1;
				     
				     else 
				     cont_ad = cont_ad + 1;
				     
				if (renda<=4)
				cont_classec = cont_classec + 1;
				
				else 
				     if (renda>=5&&renda<=25)
				     cont_classeb = cont_classeb + 1;
				     else 
				     cont_classea = cont_classea + 1;
		    
			         cont = cont + 1;
			
			         soma = soma + renda; 
		             
		             pessoas = pessoas + 1;
		
			}
		    
     
		    else {
			
		    printf ("\n \n DIGITE UMA IDADE MAIOR QUE 0 \n \n");
          }
	
            
            
             
			   printf ("\n Quer continuar? \n Digite s para sim \n Digite n para não \n");
               fflush(stdin);
			   scanf ("%s",&opcao);
            
	     	
	
	    }while (opcao!='n');
    
	}while (opcao!='s');    
		  
		  
		  porc_homens = (cont_h*100)/pessoas;
		  porc_mulheres = (cont_m*100)/pessoas;
		  porc_criancas = (cont_c*100)/pessoas;
		  porc_adolescentes = (cont_a*100)/pessoas;
		  porc_adultos = (cont_ad*100)/pessoas;
		  porc_classea = (cont_classea*100)/pessoas; 
          porc_classeb = (cont_classeb*100)/pessoas; 
          porc_classec = (cont_classec*100)/pessoas; 
          total =  soma/pessoas;
           
		   printf ("\n A %% de homens no grupo é : %f \n A %% de mulheres no grupo é :%f \n",porc_homens,porc_mulheres);
           printf ("\n A %% de crianças (até 12 anos) no grupo é : %f \n A %% de adolescentes no grupo (de 13 a 17 anos) é : %f \n A %% de adultos no grupo (acima de 18) é : %f",porc_criancas,porc_adolescentes,porc_adultos);
           printf ("\n A %% de pessoas da classe C (até 4 salarios minimos) é : %f \n A %% de pessoas da classe B (entre 5 e 25 salarios minimos) é : %f \n A %% de pessoas da classe C (acima de 25 salarios minimos) é : %f \n",porc_classea,porc_classeb,porc_classec);
           printf ("\n A media de renda das pessoas é : %f \n",total);

}
