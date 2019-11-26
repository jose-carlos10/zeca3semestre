#include <stdlib.h>
#include <stdio.h>

//Em PILHA, primeiro incrementamos a variável "topo" pra depois inserir um novo elemento

void empilha();
void desempilha();

int topo=-1, TAM, valor, *pilha;

int main(){
	
	 // Declaração de variáveis.
  int a, b, i, c, n;

  // Aqui foi necessário atribuir valores as variáveis a e b.
  a = 1;
  b = 0;
  c = b; //variavel pra salvar 0;
  
  // A função printf() escreve na tela.
  printf("Digite um número: ");
  // A função scanf obtém um valor digitado.
  scanf("%d", &n);
  
  TAM = n;
  
  pilha = (int*)malloc(n*sizeof(int));
  
  printf("Série de Fibonacci:\n");
  

  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)
  {
    valor = a + b;
    a = b;
    b = valor;

    empilha();
  }

  for(i=0;i<n;i++){
	  desempilha();
	  printf("%d\n", valor);
  }
  
  printf("%d\n", c);

  free(pilha);		
}

void empilha(){
	
	if(topo==TAM-1){
		printf("\n***Pilha cheia***\n");
	}else{
		topo++;
		pilha[topo] = valor;
	}
}

void desempilha(){
	
	if(topo==-1){
		printf("\n***Pilha vazia***\n");
	}else{
		valor = pilha[topo];
		topo--;
	}	
}