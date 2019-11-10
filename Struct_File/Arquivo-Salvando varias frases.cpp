#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   FILE *PTRARQ;
   
   char opcao = 'S' , frases[81];
   PTRARQ = fopen("FRASES.DAT", "w");
   
   while (opcao=='S')
   {
    printf ("\n Digite uma frase : ");
    fflush(stdin);
    fgets(frases,81,stdin);
    fputs(frases,PTRARQ);
      do{
		  printf("\n Digite continuar s/n ?");
		  fflush(stdin);
		  scanf("%c",&opcao);
		  opcao = toupper(opcao);		    
	  }while(opcao !='S' && opcao !='N'); 
  }
fclose(PTRARQ);
printf("\n Pressione qualquer tecla para continuar ");
system("pause > null"); 
 

}
