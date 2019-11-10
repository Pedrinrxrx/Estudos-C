#include <stdio.h>
#include <stdlib.h>

int idade[5],i;
FILE *PTRARQ;

int criar();
int cadastrar();
int consultar();

int main()
{
   int opcao;
   do{
      system("cls");
      printf("\n Menu \n");
      printf("\n 1 - Criar arquivo");
      printf("\n 2 - Cadastrar idade ");
      printf("\n 3 - Consultar idade");
      printf("\n 4 - FIM");
      printf ("\n Escolha a sua opcao :");
      scanf("%d",&opcao);   
      switch(opcao)
      {
	    case 1 : criar();
	    	break;
	    case 2 : cadastrar();
			break;
		case 3 : consultar();
			break;
		case 4 : printf("\n Fim ");
			break;
		
		default: printf("\n Opcao invalida");				
	  }
	   printf("\n Digite qualquer tecla pra continuar ");
       system("pause>null"); 
   }while(opcao!=4);
}
 
int criar()
{
  printf("\n Criar arquivo \n");
  PTRARQ = fopen("ARQIDADE.DAT","w");
  printf("\n arquivo criado");
  fclose(PTRARQ); 
 
}  

int cadastrar()
{
  printf("\n Cadastrar idade ");
  PTRARQ = fopen("ARQIDADE.DAT","wb");
    for(i=0;i<=4;i++)
   {
     printf("\n Digite a idade");
     scanf("%d",&idade[i]);
   }
  
  fwrite(idade,sizeof(idade),1,PTRARQ);
  fclose(PTRARQ);
  return(0); 
}

int consultar()
{
  printf("\n Consultar idades ");
  PTRARQ = fopen("ARQIDADE.DAT","rb");
  fread(idade,sizeof(idade),1,PTRARQ);
  	for(i=0;i<=4; i++)
  	  printf("\n Idade : %d",idade[i]);
  	fclose(PTRARQ);
  	return(0);
}
