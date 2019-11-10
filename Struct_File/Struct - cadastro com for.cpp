#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agenda
{
	char nome[30];
	char endereco[40];
	char telefone [10];

}reg[3];

 int main()
 {
 	int i;
 	for(i=0;i<=2;i++)
 	{
 	 	 
 	printf ("\n digite o nome: ");
	gets(reg[i].nome);
	printf ("\n digite o endereco: ");
	gets (reg[i].endereco);
	printf ("\n digite o telefone: ");
	gets (reg[i].telefone);
	}
	
	for(i=0;i<=2;i++)
	{
	printf ("\n nome: %s ", reg[i].nome);
	printf ("\n endereco: %s", reg[i].endereco);
	printf ("\n telefone: %s", reg[i].telefone);
	}
	
	system("pause>null");
 }
