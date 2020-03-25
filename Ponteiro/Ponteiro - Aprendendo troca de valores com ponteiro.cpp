#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
   setlocale(LC_ALL,"Portuguese");
   
   int i,j,*q,*p,aux;
   
   i= 4;
   j = 5;
   
   
   p=&i;
   q=&j;
   
   aux = *p;
   *p = *q;
   *q = aux;
   
   printf("\n O valor de i é %d e de j %d \n",i,j);
   
   
   
   /*trocando valores com o ponteiro*/


}
