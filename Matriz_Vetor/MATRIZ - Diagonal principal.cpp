#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()

{
    setlocale (LC_ALL,"Portuguese");
    
	int matriz[5][5],i,j;

    for (i=0;i<5;i++) 
       for (j=0;j<5;j++) {
	   
	   	printf ("\n Digite o n�mero [%d] na linha [%d] \n",j,i);
	   	scanf ("%d",&matriz[i][j]);


      }
       
     printf ("\n Os n�meros da diagonal principal da matriz s�o :  \n");
     
     for (i=0;i<5;i++)
     printf ("%d ",matriz[i][i]);




}
