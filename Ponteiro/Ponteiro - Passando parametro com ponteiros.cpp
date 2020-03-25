#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void troca(int *r, int	*s)
{
   int aux;
   aux = *r;
   *r = *s;
   *s = aux;

}


int main()
{  
   setlocale(LC_ALL,"Portuguese");
   int i,j,*p,*q;
   
   i=4;
   j=5;
   
   p=&i;
   q=&j;
   
   
   troca(p,q); 
   
   printf("i = %d  j = %d ",i,j);
   
   
}
