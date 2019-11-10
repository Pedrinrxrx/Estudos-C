#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int criacao();
int inclusao();
int leituraconsulta();

int main () 
{

    criacao();
	
	inclusao();
	
	leituraconsulta();
	  
    printf ("\n Aperte qualque tecla para continuar ");
    system("pause>null"); 
}


int criacao()
{
    FILE *PONTARQ;
    
    PONTARQ = fopen ("ARQTEXTO.DAT","a");
    fclose(PONTARQ);
    return(0);

}

int inclusao()
{
   FILE *PONTARQ;
   char nome [30];
   
   PONTARQ = fopen("ARQTEXTO.DAT","w");
   printf ("\n Digite um nome : ");
   scanf("%s",&nome);
   fprintf(PONTARQ,"%s",&nome);
   fclose(PONTARQ);
   return(0);
  
}

int leituraconsulta()
{
  FILE*PONTARQ;
  char nome[30];
  PONTARQ = fopen("ARQTEXTO.DAT","r");
  fscanf(PONTARQ, "%s",nome);
  printf("Nome = %s",nome);
  fclose(PONTARQ);
  return(0);

}
