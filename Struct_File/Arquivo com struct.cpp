/*Nome : Pedro Augusto Torres Costa RA : 3556557
  Nome : Matheus Iderland de Paula RA : 3759544	
  Tema : Vendedora de carros	*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int i,j,carro,opcao,c = 0,contador = 0,z = -1;
char escolha,auxnome[100], auxrua[100], auxbairro[100], auxtelefone[100], auxemail[100],auxnum[100],procura[500];

FILE *VELARQ;

int criar(); 
int cadastro(); 
int pesquisa();
int relatorio();
int classificar();
double compras();
double desconto();
double finalizar();



struct vendas{
   

   double valor;
   double desconto;
   char carro[100];
   double result;
   double parcela;
   double total_mes;

}vend[100];



struct local
{
  char rua[100];
  char bairro[100];
  char num[6];


}endereco;



struct registro 
{

  char nome[500];
  char telefone[50];
  char email[80];
  local endereco;


}reg[100];


int main ()
{
  setlocale(LC_ALL,"Portuguese");	
  char pessoa;
  
  do{
      pessoa = 'h';    
	   c = c + 1; 
	   z = z + 1;	   
  
    do{
    	
    system("cls");
    	
     printf("\n *************************** \n");
     printf("\n  MENU \n");
     printf("\n *************************** \n \n");
   	 printf("\n 1 - Criar arquivo \n");
     printf("\n 2 - Cadastro \n");
     printf("\n 3 - Pesquisa \n");
     printf("\n 4 - Relatório com classificação \n"); 
     printf("\n 5 - Catálogo de compra de carros \n");
     printf("\n 6 - Tipo de pagamento/desconto \n");
     printf("\n 7 - Fim da compra \n");
     printf("\n 8 - Finalizar programa ou adicionar um novo cadastro \n");
     scanf("%d",&opcao);
     
       switch(opcao){
	   
	       case 1 : criar();
	       break;
	       
	       case 2 : cadastro();
	       break;
	       
	       case 3 : pesquisa();
	               
	                
	       break;
	       
	       case 4 : relatorio();
	       break;
	       
	       case 5 : compras();
	                 
	       break;
	       
	       case 6 : desconto();
	       break;
	       
	       case 7 : finalizar();
	       break; 
	       
	       case 8 : printf("\n Fim \n");
	       break;
	       
	       default : printf("\n Opção invalida \n");
	       break;
	       
	   
	   
	   
	   }
	   printf("\n Digite qualquer tecla para continuar \n");
	   system("pause>null");
	
	 }while(opcao!=8 && opcao!=7);
	
	while(pessoa != 'S' && pessoa!= 'N'){
	printf("\n Deseja adicionar mais pessoas ? \n");
    printf("\n Digite sim para continuar ou não para sair \n");
    scanf("%s",&pessoa);
    pessoa = toupper(pessoa);
    
    }
  
   }while(pessoa!= 'N');
    

}

int criar()
{
  printf("\n Criar arquivo \n");
  VELARQ = fopen("VELARQ.DAT","w");
  printf("\n Arquivo criado \n");
  fclose(VELARQ);
  
}

int cadastro()
{ 
   
   VELARQ = fopen("VELARQ.DAT","a");
   
   printf("\n *************************** \n");
   printf("\n  BEM VINDO A ÁREA DE CADASTRO \n");
   printf("\n *************************** \n \n");
   
    
   	printf("\n Digite seu nome completo : ");
   	fflush(stdin);
   	fgets(reg[z].nome,500,stdin);
   	fputs(reg[z].nome,VELARQ);
   	printf("\n Digite a rua onde mora : ");
   	fflush(stdin);
   	fgets(reg[z].endereco.rua,100,stdin);
   	fputs(reg[z].endereco.rua,VELARQ);
   	printf("\n Digite o bairro onde mora : ");
   	fgets(reg[z].endereco.bairro,100,stdin);
   	fputs(reg[z].endereco.bairro,VELARQ);
   	printf("\n Digite o número da casa : ");
   	fflush(stdin);
   	fgets(reg[z].endereco.num,6,stdin);
   	fputs(reg[z].endereco.num,VELARQ);
   	printf("\n Digite o seu número de telefone : ");
   	fflush(stdin);
   	fgets(reg[z].telefone,50,stdin);
   	fputs(reg[z].telefone,VELARQ);
   	printf("\n Digite o seu email : ");
   	fflush(stdin);
   	fgets(reg[z].email,80,stdin);
   	fputs(reg[z].email,VELARQ);
   
   	fclose(VELARQ);
   
}

int pesquisa()
{
   int x;
   VELARQ = fopen("VELARQ.DAT","a");
   
   printf("\n Digite o nome que quer procurar \n");
   fflush(stdin);
   fgets(procura,500,stdin);
   contador = 0;

    for(i=0; i<c; i++){
	     
   	    if(strcmp(procura,reg[i].nome) == 0)
   	    {
           strcpy(auxnome,reg[i].nome);
    	   strcpy(auxrua, reg[i].endereco.rua);
    	   strcpy(auxbairro, reg[i].endereco.bairro);
    	   strcpy(auxnum, reg[i].endereco.num);
    	   strcpy(auxtelefone, reg[i].telefone);
           strcpy(auxemail, reg[i].email);  
		   contador = 1;       
           
   	    }
    } 
      
        if (contador == 1){
	      printf ("\n Cadastro encontrado \n ");
	      printf("\n Nome : %s",auxnome);
	      printf("\n Rua : %s ",auxrua);
	      printf("\n Bairro : %s",auxbairro);
	      printf("\n Nº : %s",auxbairro);
	      printf("\n Telefone : %s",auxtelefone);
	      printf("\n Email : %s ",auxemail);  	  	      
	    }
		
		else		
		printf("\n Cadastro não encontrado \n");

    
    fclose(VELARQ);
}


int relatorio()
{  

   classificar();
   
   return(0);
  
}

int classificar()
{
   
   VELARQ = fopen("VELARQ.DAT","a");
   
   
    for(i=0; i<c; i++)
	  for(j= i + 1; j < c; j++) 
       if (strcmp(reg[i].nome,reg[j].nome) > 0) 
	   {
	      strcpy(auxnome,reg[i].nome);
	      strcpy(reg[i].nome,reg[j].nome);
	      strcpy(reg[j].nome,auxnome);
	      
	      strcpy(auxrua,reg[i].endereco.rua);
	      strcpy(reg[i].endereco.rua,reg[j].endereco.rua);
	      strcpy(reg[j].endereco.rua,auxrua);
	      
	      strcpy(auxbairro,reg[i].endereco.bairro);
	      strcpy(reg[i].endereco.bairro,reg[j].endereco.bairro);
	      strcpy(reg[j].endereco.bairro,auxrua);
	      
	      strcpy(auxnum,reg[i].endereco.num);
	      strcpy(reg[i].endereco.num,reg[j].endereco.num);
	      strcpy(reg[j].endereco.num,auxnum);
	      
	      strcpy(auxtelefone,reg[i].telefone);
	      strcpy(reg[i].telefone,reg[j].telefone);
	      strcpy(reg[j].telefone,auxtelefone);
	      
	      strcpy(auxemail,reg[i].email);
	      strcpy(reg[i].email,reg[j].email);
	      strcpy(reg[j].email,auxemail);
	   }
     for(i=0;i<c;i++){
     
     printf("\n Nome : %s \n",reg[i].nome);
     fputs(reg[i].nome,VELARQ);
     printf("\n Rua : %s \n",reg[i].endereco.rua);
     fputs(reg[i].endereco.rua,VELARQ);
     printf("\n Bairro : %s \n",reg[i].endereco.bairro);
     fputs(reg[i].endereco.bairro,VELARQ);
     printf("\n Telefone : %s \n",reg[i].telefone);
     fputs(reg[i].telefone,VELARQ);
     printf("\n Email : %s \n",reg[i].email);
     fputs(reg[i].email,VELARQ);
     
     printf("\n --------------------------- \n");
     printf("\n");
   		
	}     
	  fclose(VELARQ);
      
      return(0);
     
}

double compras()
{
   char escolher,s_n;
     
    VELARQ = fopen("VELARQ.DAT","a");
   
   do {
      printf("\n Escolha a marca do carro \n"); 
      printf("\n [1] Toyota \n");
      printf("\n [2] Volkswagen \n");
      printf("\n [3] Ford \n");
      printf("\n [4] Nissan \n");
      printf("\n [5] Honda \n");
      printf("\n [6] Hyundai \n");
      printf("\n [7] Chevrolet \n");
      printf("\n Digite 0 para voltar ao menu anterior \n");
      scanf("%s",&escolha);
       
      	switch(escolha){
	        
	        case '1' : 
	            do{
				   
	                printf("\n Você escolheu a linha Toyota \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Toyota Corolla \n");
					printf("\n [2] Toyota RAV4 \n");
					printf("\n [3] Toyota Camry \n");
					printf("\n [4] Toyota Yaris \n");
					printf("\n [5] Toyota Prius \n");
					printf("\n [6] Toyota Etios \n");
					printf("\n [7] Toyota SW4 \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Toyota Corolla, ");
									 printf("ele está no valor de R$ 149.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 149.990;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Toyota Corolla");
									 	fputs(vend[z].carro,VELARQ);
									 }
						 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Toyota RAV4, ");
									 printf("ele está no valor de R$ 90.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 90.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota RAV4");
									 fputs(vend[z].carro,VELARQ);
									
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Toyota Camry, ");
									 printf("ele está no valor de R$ 206.200 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 206.200;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota Camry");
									 fputs(vend[z].carro,VELARQ);
 									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Toyota Yaris, ");
									 printf("ele está no valor de R$ 66.490 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 66.490;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota Yaris");
									 fputs(vend[z].carro,VELARQ);
									 
									 }
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Toyota Prius, ");
									 printf("ele está no valor de R$ 128.530 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 128.530;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota Prius");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Toyota Etios, ");
									 printf("ele está no valor de R$ 51.390 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){ 
									 vend[z].valor = 51.390;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota Etios");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Toyota SW4, ");
									 printf("ele está no valor de R$ 161.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 161.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Toyota SW4");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	 
		
		break;
				
		case '2' :  
				do{
				   
	                printf("\n Você escolheu a linha Volkswagen \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar*** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Volkswagen Polo \n");
					printf("\n [2] Volkswagen Golf \n");
					printf("\n [3] Volkswagen Passat \n");
					printf("\n [4] Volkswagen Jetta \n");
					printf("\n [5] Volkswagen Up! \n");
					printf("\n [6] Volkswagen T-Cross \n");
					printf("\n [7] Volkswagen Tiguan Allspace \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Volkswagen Polo, ");
									 printf("ele está no valor de R$ 129.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 129.990;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Volkswagen Polo");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 	
									 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Volkswagen Golf, ");
									 printf("ele está no valor de R$ 84.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 84.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen Golf");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Volkswagen Passat!, ");
									 printf("ele está no valor de R$ 49.590 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 49.590;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen Passat!");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Volkswagen Jetta, ");
									 printf("ele está no valor de R$ 99.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 99.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen Jetta");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Volkswagen Up !, ");
									 printf("ele está no valor de R$ 168.690 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 168.690;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen Up !");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Volkswagen T-Cross, ");
									 printf("ele está no valor de R$ 151.530 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 151.530;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen T-Cross");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o VTiguan Allspace, ");
									 printf("ele está no valor de R$ 53.590 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 53.590;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Volkswagen Tiguan Allspace");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	
			    	  
	  		break;
	  		
	  		case '3' :  
				do{
				   
	                printf("\n Você escolheu a linha Ford \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Ford Mustang \n");
					printf("\n [2] Ford Fiesta \n");
					printf("\n [3] Ford Ecosport \n");
					printf("\n [4] Ford Ka \n");
					printf("\n [5] Ford Fusion \n");
					printf("\n [6] Ford Edge \n");
					printf("\n [7] Ford Focus \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Ford Mustang, ");
									 printf("ele está no valor de R$ 315.900 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 315.900;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Ford Mustang");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 		 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Ford Fiesta, ");
									 printf("ele está no valor de R$ 50.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 50.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Fiesta");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Ford Ecosport, ");
									 printf("ele está no valor de R$ 69.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 69.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Ecosport");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Ford Ka, ");
									 printf("ele está no valor de  R$ 45.590\n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 99.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Ka");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Ford Fusion, ");
									 printf("ele está no valor de R$ 149.900 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 149.900;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Fusion");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Ford Edge, ");
									 printf("ele está no valor de R$ 299.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 299.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Edge");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Ford Focus, ");
									 printf("ele está no valor de R$ 68.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 68.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Ford Focus");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');
		break;
		
		case '4':		
			do{ 
	                printf("\n Você escolheu a linha Nissan \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Nissan March \n");
					printf("\n [2] Nissan Leaf \n");
					printf("\n [3] Nissan Sentra \n");
					printf("\n [4] Nissan Kicks \n");
					printf("\n [5] Nissan Versa \n");
					printf("\n [6] Nissan Frontier \n");
					printf("\n [7] Nissan GT-R \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Nissan March, ");
									 printf("ele está no valor de R$ 47.690 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 47.690;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Nissan March");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 		 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Nissan Leaf, ");
									 printf("ele está no valor de R$ 195.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 195.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan Leaf");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Nissan Sentra, ");
									 printf("ele está no valor de R$ 87.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 87.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan Sentra");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Nissan Kicks, ");
									 printf("ele está no valor de  R$ 68.640 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 68.640;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan Kicks");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Nissan Versa, ");
									 printf("ele está no valor de R$ 52.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 52.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan Versa");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Nissan Frontier, ");
									 printf("ele está no valor de R$ 136.190 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 136.190;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan Frontier");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Nissan GT-R, ");
									 printf("ele está no valor de R$ 900.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 900.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Nissan GT-R");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	
			
			break;
			
			case '5':		
			do{ 
	                printf("\n Você escolheu a linha Honda \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Honda Civic \n");
					printf("\n [2] Honda CR-V \n");
					printf("\n [3] Honda Fit \n");
					printf("\n [4] Honda City \n");
					printf("\n [5] Honda WR-V  \n");
					printf("\n [6] Honda Accord \n");
					printf("\n [7] Honda Civic SI \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Honda Civic, ");
									 printf("ele está no valor de R$ 92.300 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 92.300;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Honda Civic");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 		 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Honda CR-V, ");
									 printf("ele está no valor de R$ 194.900 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 194.900;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda CR-V");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Honda Fit, ");
									 printf("ele está no valor de R$ 87.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 87.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda Fit");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Honda City, ");
									 printf("ele está no valor de  R$ 62.800 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 62.800;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda City");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Honda WR-V, ");
									 printf("ele está no valor de R$ 83.700 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 83.700;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda WR-V");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Honda Accord, ");
									 printf("ele está no valor de R$ 198.500 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 198.500;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda Accord");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Honda Civic SI, ");
									 printf("ele está no valor de R$ 198.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 198.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Honda Civic SI");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	
			
			break;
	  		
	  		
	  		
	  			case '6':		
			do{ 
	                printf("\n Você escolheu a linha Hyundai \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Hyundai Tucson \n");
					printf("\n [2] Hyundai Elantra \n");
					printf("\n [3] Hyundai Santa-fe \n");
					printf("\n [4] Hyundai Creta \n");
					printf("\n [5] Hyundai HB20  \n");
					printf("\n [6] Hyundai Azera \n");
					printf("\n [7] Hyundai Ix35 \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Hyundai Tucson, ");
									 printf("ele está no valor de R$ 139.900 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 139.900;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Hyundai Tucson");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 		 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Hyundai Elantra, ");
									 printf("ele está no valor de R$ 180.100 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 180.100;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai Elantra");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Hyundai Santa-fe, ");
									 printf("ele está no valor de R$ 297.300 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 297.300;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai Santa-fe");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Hyundai Creta, ");
									 printf("ele está no valor de  R$ 120.200 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 120.200;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai Creta");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Hyundai HB20, ");
									 printf("ele está no valor de R$ 90.500 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 90.700;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai HB20");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Hyunday Azera, ");
									 printf("ele está no valor de R$ 269.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 269.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai Azera");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Hyundai Ix35, ");
									 printf("ele está no valor de R$ 99.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 99.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Hyundai Ix35");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	
			
			break;
			
			
	  			case '7':		
			do{ 
	                printf("\n Você escolheu a linha Chevrolet \n");
	                printf("\n *** Por favor escolha o carro que deseja comprar *** \n");
	                printf("\n-------------------------------------\n");
					printf("\n [1] Chevrolet Prisma \n");
					printf("\n [2] Chevrolet Elentra \n");
					printf("\n [3] Chevrolet Cruze\n");
					printf("\n [4] Chevrolet Onix\n");
					printf("\n [5] Chevrolet Bolt  \n");
					printf("\n [6] Chevrolet Colbat \n");
					printf("\n [7] Chevrolet Spin \n");
					scanf("%s",&escolher);
					
					   switch(escolher){
					   
							case '1' : 
									 printf("\n Você escolheu o Chevrolet Prisma , ");
									 printf("ele está no valor de R$ 90.900 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 	if(s_n == 's'){
									 	vend[z].valor = 90.900;
									 	fprintf(VELARQ,"%lf \n",vend[z].valor);
									 	strcpy(vend[z].carro,"Chevrolet Prisma");
									 	fputs(vend[z].carro,VELARQ);
									 	}
									 		 
							break;	
							
							case '2' : 
									 printf("\n Você escolheu o Chevrolet Elantra, ");
									 printf("ele está no valor de R$ 330.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 330.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Elantra");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '3' : 
									 printf("\n Você escolheu o Crevrolet Cruze, ");
									 printf("ele está no valor de R$ 99.390 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 99.390;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Cruze");
									 fputs(vend[z].carro,VELARQ);
									}
							break;	
							
							case '4' : 
									 printf("\n Você escolheu o Crevrolet Onix , ");
									 printf("ele está no valor de  R$ 47.200 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 47.200;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Onix");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '5' : 
									 printf("\n Você escolheu o Chevrolet Bolt, ");
									 printf("ele está no valor de R$ 37.500 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 37.500;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Bolt");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '6' : 
									 printf("\n Você escolheu o Chevrolet Cobalt, ");
									 printf("ele está no valor de R$ 62.000 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 62.000;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Cobalt");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							case '7' : 
									 printf("\n Você escolheu o Chevrolet Spin, ");
									 printf("ele está no valor de R$ 70.990 \n");
									 printf("\n Deseja continuar ?");
									 printf("\n \n Digite s para sim e n para voltar ao menu principal \n");
									 scanf("%s",&s_n);
									 
									 if(s_n == 's'){
									 vend[z].valor = 70.990;
									 fprintf(VELARQ,"%lf \n",vend[z].valor);
									 strcpy(vend[z].carro,"Chevrolet Spin");
									 fputs(vend[z].carro,VELARQ);
									}
							break;
							
							default : printf("\n Opção inválida \n");	
								 			 					   
				 		}		    		 
			
				}while(s_n == 'n');	
  		 }
  		 
  	 }while(s_n != 's' && escolha != '0');
   
      fclose(VELARQ);
      
      return(0);
      
}

double desconto()
{   
    int parcela;
    double juros,total_mes,desconto,val_mes;
    
    VELARQ = fopen("VELARQ.DAT","a");
    
    printf ("\n *** Forma de pagamento *** \n");
    printf("\n [1] Á vista : desconto de 7%% \n \n");
    printf("\n [2] Cartão/parcela : %% por mês \n");
    scanf("%d",&opcao);
    
    	switch(opcao){
		   
		 case 1 : vend[z].desconto = vend[z].valor * 0.07; 
		  		  vend[z].result = vend[z].valor - vend[z].desconto;
				  printf("\n O desconto será de R$ %lf \n E o valor total ficará : R$ %lf ",vend[z].desconto,vend[z].result);
				  fprintf(VELARQ,"%lf",vend[z].desconto);
				  fprintf(VELARQ,"%lf",vend[z].result);
		 break;
		 
		 case 2 : printf("\n Em quantas vezes você vai parcelar o carro \n");
		  		  printf("\n Máximo de 48 vezes (juros 1%% ao mês) \n");
		          scanf("%d",&parcela);
				  
				 if (parcela <= 48 && parcela > 0){	
				   
		    		juros = (vend[z].valor/parcela) * 0.01;
		    		vend[z].total_mes = val_mes + juros;

					vend[z].result = vend[z].valor + (val_mes * parcela);  
					
				    printf("\n Valor da parcela mensal com juros : R$ %lf \n",vend[z].total_mes);
				    printf("\n Valor total à pagar : R$ %lf \n",vend[z].result);  	
				    fprintf(VELARQ,"%lf",vend[z].total_mes);
				    fprintf(VELARQ,"%lf",vend[z].result);
			    }
			    else 
			    printf("\n Erro \n");
		 break;	    
		}  
		
      fclose(VELARQ);
      
      return(0);
}

double finalizar()
{
   VELARQ = fopen("VELARQ.DAT","a");
   
   int j;
   char fim,auxcarro[500];
   double auxvalor;
     
   printf("\n Digite s para finalizar essa compra \n ou n para procurar outro cadastro para finalizar a compra \n");  
   scanf("%s",&escolha);  
   
   if(escolha == 's'){
     	
   	 printf("\n Nome : %s \n",reg[z].nome);
     printf("\n Rua : %s \n",reg[z].endereco.rua);
     printf("\n Bairro : %s \n",reg[z].endereco.bairro);
     printf("\n Telefone : %s \n",reg[z].telefone);
     printf("\n Email : %s \n",reg[z].email);
     printf("\n Modelo de carro que deseja : %s \n",vend[z].carro);
     printf("\n Valor final do carro : %lf \n",vend[z].result);
     
     printf("\n Deseja concluir  compra ? \n Digite s para sim e n para não \n");
	 scanf("%s",&fim);
	 fim = tolower(fim);
	      
	 if(fim == 's') 	    
	 printf("\n Obrigado por comprar FMU-CAR \n");
		  
	 else
	 printf("\n Okay volte uma proxima vez \n");
   
   }  
   
   else{
     
     printf("\n Digite o nome da pessoa cadastrada que \n você está procurando para finalizar a compra : \n");
     fflush(stdin);
     gets(procura);
     contador = 0;
     
     for(i=0; i<c; i++){ 
     	if(strcmp(reg[i].nome,procura) == 0) {
     		
     	   strcpy(auxnome,reg[i].nome);
    	   strcpy(auxrua, reg[i].endereco.rua);
    	   strcpy(auxbairro, reg[i].endereco.bairro);
    	   strcpy(auxnum, reg[i].endereco.num);
    	   strcpy(auxtelefone, reg[i].telefone);
           strcpy(auxemail, reg[i].email);
           strcpy(auxcarro,vend[i].carro);
           auxvalor = vend[i].result;
           j = i;
           contador = 1;
	   	}     
	 }	 
	      if(contador == 1){
 	 	  printf ("\n Cadastro encontrado \n ");
	      printf("\n Nome : %s",auxnome);
	      printf("\n Rua : %s ",auxrua);
	      printf("\n Bairro : %s",auxbairro);
	      printf("\n Nº : %s",auxbairro);
	      printf("\n Telefone : %s",auxtelefone);
	      printf("\n Email : %s ",auxemail);  
	      printf("\n Carro : %s ",vend[j].carro);
	      printf("\n Valor do carro : %lf",auxvalor);
	      
	      
	      printf("\n Deseja concluir  compra ? \n Digite s para sim e n para não \n");
	      scanf("%s",&fim);
	      fim = tolower(fim);
	      
	      if(fim == 's') 	    
		  printf("\n Obrigado por comprar FMU-CAR \n");
		  
		  else
		  printf("\n Okay volte uma proxima vez \n");
	      
	  	}
	      
		  else
		  printf("\n Cadastro não encontrado \n"); 
    }
	     
	  fclose(VELARQ);
      
      return(0);

}
