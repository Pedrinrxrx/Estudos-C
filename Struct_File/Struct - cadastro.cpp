#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int cadastro();
int pesquisa ();
int relatorio();
int classificar();

char auxnome[50], auxrua[50], auxbairro[50], auxtelefone[50], auxemail[50];
int i, auxnum;

struct endereco 
{
	char rua[50];
	int numero;
	char bairro[50];
	
} reg;


struct agenda 
{
	char nome[50];
	char telefone[50];
	char email[50];
    endereco reg;
	
} eletronica[3];

int main ()
{
	setlocale (LC_ALL, " ");
	int opcao;
	
	do{
		printf ("\n digite [1] para cadastro \n");
		printf ("\n digite [2] para pesquisa \n");
		printf ("\n digite [3] para o relatóirio \n");
		printf ("\n digite [4] para FIM \n");
		scanf ("%d", &opcao);
		
		switch (opcao)
		{
			case 1: cadastro ();
			    break;
			    
			case 2: pesquisa ();
			    break;
				
			case 3: relatorio ();
				break;
				
			case 4: 
			    printf ("\n FIM \n");
				break;			    
		}
		
	}while (opcao != 4);
}

int cadastro ()
{
	
	
	
	for (i = 0; i <= 2; i++)
	{
		printf ("\n digite o %d° nome: ", i+1);
		fflush (stdin);
		gets (eletronica[i].nome);
		printf ("\n digite a rua: ");
		fflush (stdin);
		gets (eletronica[i].reg.rua);
		printf ("\n digite o número da casa: ");
		scanf ("%d", &eletronica[i].reg.numero);
		printf ("\n digite o bairro: ");
		fflush (stdin);
		gets (eletronica[i].reg.bairro);
		printf ("\n digite o telefone: ");
		fflush (stdin);
		gets (eletronica[i].telefone);
		printf ("\n digite o e-mail: ");
		fflush (stdin);
		gets (eletronica[i].email);
	}
	return (0);
}

int pesquisa ()
{
    char procura_nome[50];
    int cont=0;
    
    printf ("\n digite o nome que você esta procurando: ");
    fflush (stdin);
    gets (procura_nome);
    
    for (i = 0; i <= 2; i++)
    {
    	if (strcmp(procura_nome, eletronica[i].nome) == 0)
    	{
    		strcpy (auxnome, eletronica[i].nome);
    		strcpy (auxrua, eletronica[i].reg.rua);
    		strcpy (auxbairro, eletronica[i].reg.bairro);
    		strcpy (auxtelefone, eletronica[i].telefone);
            strcpy (auxemail, eletronica[i].email);
            
            auxnum = eletronica[i].reg.numero;
		}
		else 
		    cont = cont + 1;
	}
	if (cont < 3)
	{
	    printf ("\n nome: %s", auxnome);
	    printf ("\n rua: %s", auxrua);
	    printf ("\n numero da rua: %d", auxnum);
	    printf ("\n bairro: %s", auxbairro);
	    printf ("\n telefone: %s", auxtelefone);
	    printf ("\n e-mail: %s", auxemail);
    }
    else 
    printf ("Nome não encontrado");
    
    return (0);
}

int relatorio()
{
	classificar();
	return (0);
}

int classificar ()
{
    int j;
	char aux[50];
	
	for (i = 0; i <= 2; i ++)
	    for (j= i + 1; j <= 3; j++)
	        if (strcmp(eletronica[i].nome, eletronica[j].nome) > 0)
	        {
	        	strcpy (auxnome, eletronica[i].nome);
	        	strcpy (eletronica[i].nome, eletronica[j].nome);
	        	strcpy (eletronica[j].nome, auxnome);
	        	
	        	strcpy (auxrua, eletronica[i].reg.rua);
	        	strcpy (eletronica[i].reg.rua, eletronica[j].reg.rua);
	        	strcpy (eletronica[j].reg.rua, auxrua);
	        	
	        	strcpy (auxbairro, eletronica[i].reg.bairro);
	        	strcpy (eletronica[i].reg.bairro, eletronica[j].reg.bairro);
	        	strcpy (eletronica[j].reg.bairro, auxbairro);
	        	
	        	strcpy (auxtelefone, eletronica[i].telefone);
	        	strcpy (eletronica[i].telefone, eletronica[j].telefone);
	        	strcpy (eletronica[j].telefone, auxtelefone);
	        	
	        	strcpy (auxemail, eletronica[i].email);
	        	strcpy (eletronica[i].email, eletronica[j].email);
	        	strcpy (eletronica[j].email, auxemail);
	        	
                auxnum = eletronica[i].reg.numero;
                eletronica[i].reg.numero;
                
	        	
			}
			
			
	
	
}
