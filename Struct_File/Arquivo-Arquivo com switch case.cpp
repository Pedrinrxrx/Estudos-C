#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char nome[41];
FILE *PTRARQ;

void criar();
void cadastrar();
void consultar();

int main() 
{
  int opcao;
  do{
    
	system("cls");
	printf("\n Menu \n");
	printf("1- Criar arquivo \n");
	printf("2- Cadastrar nome \n");
	printf("3- Consultar nome \n");
	printf("4- FIM");
    printf ("\n Escolha a sua opcao : ");
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
		
		default : printf("\n OPCAO INVALIDA");			   	
	
	}
     printf("\n Digite qualquer tecla pra continuar ");
     system("pause>null");
  }while(opcao != 4);
}

void criar()
{
  printf("\n Criar arquivo \n");
  PTRARQ = fopen("ARQNOME.DAT","w");
  printf("\n Arquivo criado! ");
  fclose(PTRARQ);
  return;
}

void cadastrar()
{
 char op;
 printf("\n Cadastrar nome ");
 PTRARQ = fopen("ARQNOME.DAT","a");
  do{
    printf("\n Digite o nome : ");
    fflush(stdin);
    fgets(nome,41,stdin);
    fputs(nome,PTRARQ);
     do{
		printf("\n Deseja continuar s/n");
		fflush(stdin);
		scanf("%c",&op);
		op = tolower(op);
	  }while(op='s' && op!='n');	
	}while(op=='s');
	fclose(PTRARQ);
	return;
}

void consultar()
{
  printf ("\n Consultar Nomes");
  PTRARQ = fopen("ARQNOME.DAT","r");
    while(fgets(nome,41,PTRARQ) != NULL)
      printf("Nome %s",nome);
  fclose(PTRARQ);
}

