
#include <stdio.h>
#include <conio.h>

int topo,tam=5,valor;
pilha[5];

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
 printf("\n\n 2 -- inserir um valor na pilha");
 printf("\n\n 3 -- remover valor da pilha");
 printf("\n\n 4 -- mostrar o elemento do topo da pilha");
 printf("\n\n 5 -- mostrar situacao da pilha");
 printf("\n\n 6 -- sair\n"); 
   printf("\n\n =====================================\n");	
    printf("\n\n escolha a apcao\n");
 scanf("\n %d", &resp); 
  
   switch (resp)
{
   case 1:
   	
   	 topo=-1;
   	 printf("\n pilha inicializada");
    
   break;

   case 2:
    printf("\n digite um valor pra pilha \n");
   	 scanf("%d", &valor);
   	 
     empilha ();
   break;
  case 3:
     desempilha ();
 
   break;
  case 4:
     acessoTopo();
   break;
  case 5:
  	
      situacaPilha();
      
   break;
 case 6:
    return 0;
   break;

   default:
    printf("!!! valor invalido !!!");
    break;
}
  }while(resp != 6);
   	
   	return 0;
   }
   	