#include <stdio.h>
#include <stdlib.h>

int inclusaogravacao();
int leituraconsulta();

int main()
{
   inclusaogravacao();
   leituraconsulta();
   system("pause>null");
}

int inclusaogravacao()
{
   FILE *PONTARQ;
   char letra;
   
   PONTARQ = fopen("FRASE.DAT","w");
   printf ("\n Escreva uma frase : ");
   while((letra=getchar())!= '\n')
    putc(letra,PONTARQ);
   fclose(PONTARQ);
   return(0);     

}

int leituraconsulta()
{
   FILE *PONTARQ;
   char letra;
   
   PONTARQ = fopen("FRASE.DAT","r");
   printf ("\n Consulta da frase : ");
   while((letra=fgetc(PONTARQ)) != EOF)	
	printf("%c",letra);
   fclose(PONTARQ);
   return(0);	
 
}
