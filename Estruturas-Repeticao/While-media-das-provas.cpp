#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL,"Portuguese");   	
	float contA=0,contB = 0,contC = 0,contD = 0,notac,notajava,notaphp;
	int alunos,cont ;	   
	   cont = 1;
	   printf (" Digite o numero de alunos \n");
	   scanf ("%d",&alunos);	   
	      while (cont<=alunos)    { 
	           system ("cls");
       	     notac = -1;
 	         while (notac<=0||notac>=11) {	   	   
	            printf ("\n Digite sua nota em C \n");
	            scanf ("%f",&notac);			
		     }
              notajava = -1;
	          while (notajava<=0||notajava>=11) {		  	   
	            printf ("\n Digite sua nota em Java \n");
	            scanf ("%f",&notajava);	  	  
	         }  
              notaphp = -1;
			  while (notaphp<=0||notaphp>=11) {		   	   
	            printf ("\n Digite sua nota em PHP \n");
	            scanf ("%f",&notaphp);
             }
         cont = cont + 1;
           if (notac>=5 && notajava<6 && notaphp<7) 
               contA = contA + 1;                                                                                                     
           if (notac>=5 && notajava>=6 && notaphp<7)                                                                             
                contB = contB + 1;                                    
           if (notac>=5 && notajava>=6 && notaphp>=7) 
                contC = contC + 1;            
           if (notac<5 && notajava<6 && notaphp <7) 
               contD = contD + 1;
}
           printf ("\n A quantidade de alunos que satisfazem a condi��o A e n�o satisfazem as demais s�o : %f \n",contA);
           printf ("\n A quantidade de alunos que satisfazem a condi��o A e B e n�o satisfazem a condi��o C : %f \n",contB);
           printf ("\n A quantidade de alunos que satisfazem todas situa��es s�o : %f \n",contC);
           printf ("\n A quantidade de alunos que n�o satisfazem nenhuma situa��es s�o : %f \n",contD);
             system ("pause > null");
}

