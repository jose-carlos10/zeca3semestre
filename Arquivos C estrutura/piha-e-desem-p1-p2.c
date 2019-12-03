
#include <stdio.h>
#include <conio.h>

int topo,topo2,tam=5,valor,x;
pilha[5],pilha2[5];

void empilha ()
{
	if(topo == tam-1)
	{
		printf("\n Pilha cheia \n");
	}else {
		
		topo++;
		pilha[topo]=valor;
		
	}
}

void empilha2 ()
{
	if(topo2 == tam-1)
	{
		printf("\n Pilha cheia \n");
	}else {
		
		topo2++;
		pilha2[topo2]=valor;
		
	}
}

void desempilha ()
{
	if(topo == -1)
	{
		printf("\n Pilha vazia \n");
	}else {
		
		valor = pilha[topo];
		topo--;
	}
}

void acessoTopo()
{
	if(topo == -1)
	{
		printf("\n Pilha vazia \n");
	}else {
		
		printf("\n Elemento topo : %d", pilha[topo]);
	}
}

void situacaPilha()
{
	if(topo == -1)
	{
		printf("\n Pilha vazia \n");
	}else {
			if(topo == tam-1)
			{
				printf("\n PILHA CHEIA*");
			}else
			{
				printf("\n total de elementos na pilha :   %d", topo+1);
				printf("\n Espaço disponivel na pilha :    %d", tam-(topo+1));
			}
		
	
	}
}
int main()
   { 
   	int resp;
  do{	
 printf("\n\n 1 -- inicializar pilha");
 printf("\n\n 2 -- inserir 5 valores em P1");
 printf("\n\n 3 -- remover valor de P1");
 printf("\n\n 4 -- mostrar o elemento do topo da pilha");
 printf("\n\n 5 -- mostrar situacao da pilha");
 printf("\n\n 6 -- empilhar em P2 \n");
 printf("\n\n 7 -- mostrar P1 e P2\n"); 
 printf("\n\n 8 -- sair\n"); 
   printf("\n\n =====================================\n");	
    printf("\n\n escolha a apcao\n");
 scanf("\n %d", &resp); 
  
   switch (resp)
{
   case 1:
   	
   	 topo=-1;
   	 topo2=-1;
   	 printf("\n pilha inicializada");
    
   break;

   case 2:
   	for(x=0; x<5; x++){
    printf("\n digite um valor pra pilha \n");
   	 scanf("%d", &valor);
   	 
     empilha ();
	   }
   break;
  case 3:
     desempilha ();
     if(topo!=-1){
     printf("\n o valor do topo foi removido");
	 }
   break;
  case 4:
     acessoTopo();
   break;
  case 5:
  	
      situacaPilha();
      
   break;
 case 6:
   for(x=0; x<5; x++){
	   desempilha();
	   empilha2();
   }
     
   break;

 case 7:
        printf("Mostrar as duas pilhas:\n");
        printf("Pilha 1   |   Pilha 2\n");
        for(x = 0; x < 5; x++){   
            printf("   %d -----|----- %d\n", pilha[x], pilha2[x]);
        }
     
   break;

case 8:
    return 0;
   break;

   default:
    printf("!!! valor invalido !!!");
    break;
}
  }while(resp != 8);
   	
   	return 0;
   }
   	