#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()

{
    setlocale (LC_ALL,"Portuguese");
    
	int matriz[5][5],i,j;

    for (i=0;i<5;i++) 
       for (j=0;j<5;j++) {
	   
	   	printf ("\n Digite o número [%d] na linha [%d] \n",j,i);
	   	scanf ("%d",&matriz[i][j]);


      }
       
     printf ("\n Os números da diagonal principal da matriz são :  \n");
     
     for (i=0;i<5;i++)
     printf ("%d ",matriz[i][i]);




}
