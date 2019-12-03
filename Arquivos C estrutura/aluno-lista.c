
#include <stdio.h>
#include <stdlib.h>
//variaveis globais
int x,listam[5], tamanho  , menu, t=0;
float listan[5];

//prototipos da função
void insere();
void elemento();
void exibe();
void remover();

main()
{

		
		do{
		//mostra menu
		printf("\n-------------menu---------------");
		printf("\n(0)-------reiniciar lista\n");
		printf("\n(1)-------inserir nota e matricula\n");
		printf("\n(2)-------exibe lista\n");
		printf("\n(3)-------exibe tamanho da lista\n");
		printf("\n(4)-------exibe um elemento da lista\n");
		printf("\n(5)-------remover ultimo elemento\n");
	   	printf("\n(6)-------sair\n");
		printf("\n=================================");
		scanf("%d", &menu);
		
		switch (menu){
			case 0:
			t=0;
			break;
		case 1:
			for(x=0;x<5;x++){
			insere();
			}
			break;
		case 2:
			for(x=0;x<5;x++){
			exibe();}
			break;
		case 3:
			printf("\n Tamanho da lista : %d\n", t);
			break;
		case 4:
			elemento();
			break;
		case 5:
			remover();
			break;
		case 6:
			
			break;
		default:
			printf("comando invalidao !!!");
		}
		
		
	}while(menu!=6);
	printf("PROGRAMA ENCERRADO !!!");
	return 0;

	
	
}

void insere (){
	int mat;
	float not;
	
	
		printf("\n Digite a matricula do aluno");
		scanf("\n%d", &mat);
		listam[x]=mat;
		printf("\n Digite a nota final do aluno");
		scanf("\n%f", &not);
		listan[x]=not;
		t++;
		
	}

void elemento(){
	int posicao;
	if (t==0)
		printf("\n Lista Vazia");
	else
	{
		printf("\n qual a posição que desja ?");
		scanf("%d", &posicao);
		posicao=abs(posicao);
		posicao--;
	}if (posicao >= t)
	printf("\n Nenhum codigo armazenado ou posição inesistente");
	else
	{
		printf("\n codigo da posição : %.2f ", listan[posicao]);
		printf("\n lista de matricula : %d", listam[posicao]);
	}
}
void exibe() {

	
	
		printf("\n lista de matricula : %d", listam[x]);
		printf("\n lista de nota final : %.2f", listan[x]);
		printf("===============================");
	}

void remover(){
	if(t==0)
		printf("\n LISTA VAZIA ");
	else
	{
		t--;
		printf("O ULTIMO ELEMENTO DA LISTA FOI REMOVIDO");
	}
}
	