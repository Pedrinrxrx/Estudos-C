#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct alunos
{

    long int ra;
    char nome[50];
    float media;
    int falta;

}reg[3];


int main()

{
   setlocale(LC_ALL,"");
   int i;
   float media_sala;
   
   
   for(i=0;i<=2;i++){
        
		printf ("\n Digite o %dº Ra : ",i+1);
		scanf("%li",&reg[i].ra); 
		printf ("\n Digite o %dº nome : ",i+1);
		fflush(stdin);
		gets(reg[i].nome);
		printf ("\n Digite a %dº media : ",i+1);
		scanf ("%f",&reg[i].media);
		printf ("\n Digite a quantidade de faltas do %d aluno : ",i+1);
		scanf ("%d",&reg[i].falta);
		
		  
    }
    
    for(i=0;i<=2;i++){
	
	    media_sala = media_sala + reg[i].media;
	    
		      	
	}
	
	media_sala = media_sala/3;
	
	
	for(i=0;i<=2;i++) {
	
	    printf ("\n %dº RA : %d",i+1,reg[i].ra);
	    printf ("\n %dº Nome : %s",i+1,reg[i].nome);
	    printf ("\n %dº Media : %2.1f",i+1,reg[i].media);
	    printf("\n Faltas aluno %d : %d ",i+1,reg[i].falta);
				
		if(reg[i].falta<=20) {
		  
		    printf ("\n Aluno %d aprovado por falta \n",i+1);
		  		  
		}		  
		else
		printf ("\n Aluno %d reprovado por falta \n",i+1);
	
	
	}
	
	printf ("\n Média da sala : %2.1f",media_sala);
	
}
