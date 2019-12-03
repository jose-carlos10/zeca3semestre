
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct banda
{	char nome_banda[20];
	char tipo_musica[10];
	int numero_integrante;
	int posicao;
} bandas[5];

//fun��o Escolher Rank
int posicaorank()
{
	int y;
	// pego o dado digitado coloco no objeto do Struct para poder pegar o numero digitado no  for, mas
	// com -1 na avarivel pelo fato do for come�ar do 0 j� o Struct come�a 1,2,3,4,5, n come�a com 0
	printf("\n\n");
	printf(" Qual posicao voce deseja que mostre? ");
	scanf("%d", &y);
	printf("\n\n");
	y -= 1;
	// ipressao dos dados
	printf("Nome da banda %s ", bandas[y].nome_banda);
	printf("\n");
	printf("Tipo de musica : %s ", bandas[y].tipo_musica);
	printf("\n");
	printf("Numero de Integrantes :%d ", bandas[y].numero_integrante);
	printf("\n");
	printf("Rank :%d ", bandas[y].posicao);
	printf("\n");
}

int comparaString()
{
	int pegar_indice;
	int i;
	char x[30];
	//pedindo dados para comparar
	printf("\n");
	printf("Digite o tipo de m�sica :");
	scanf("%s", &x);
	printf("\n\n");
	for(i = 0; i < 5; i++)
	{
		//fun��o para comparar as String
		if(x == bandas[i].tipo_musica)
		{
			//pegando indice que se repetiu e imprimindo
			pegar_indice = i;
			printf("Nome da banda %s ", bandas[pegar_indice].nome_banda);
			printf("\n");
			printf("Tipo de musica : %s ", bandas[pegar_indice].tipo_musica);
			printf("\n");
			printf("Numero de Integrantes :%d ", bandas[pegar_indice].numero_integrante);
			printf("\n");
			printf("Rank :%d ", bandas[pegar_indice].posicao);
			printf("\n");
		}
	}

}
// fun��o para verificar se ta cadastrada
int verificar()
{
	int i = 0;
	char x[40];
	printf("\n\n");
	printf("Digite a banda para verificar o cadastro :");
	scanf("%s", &x);

	for(i = 0; i < 5; i++)
	{
		if(strcmp(x, bandas[i].nome_banda) == 0 )
		{
			printf("\n\n");
			printf("Banda :%d", i + 1);
			printf("\n");
			printf("Nome da banda %s ", bandas[i].nome_banda);
			printf("\n");
			printf("Tipo de musica : %s ", bandas[i].tipo_musica);
			printf("\n");
			printf("Numero de Pessoas :%d ", bandas[i].numero_integrante);
			printf("\n");
			printf("Rank :%d ", bandas[i].posicao);
			printf("\n");
		}
		
	}
if(strcmp(x, bandas[i].nome_banda) != 0 )
		{
			printf("\n");
			printf("N�O EST� CADASTRADA");
			printf("\n");
		}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int loop = 1;
	int i = 0;

	int pergunta;
	
	for(i = 0 ; i < 5; i++)
	{
		printf("Banda :%d", i + 1);
		printf("\n");
		printf("Nome da banda :");
		scanf("%s", &bandas[i].nome_banda);
		printf("\n");

		printf("Tipo de musica que toca :");
		scanf("%s", &bandas[i].tipo_musica);

		printf("\n");
		printf("Numero de integrantes :");
		scanf("%d", &bandas[i].numero_integrante);

		printf("\n");
		printf("Digite a posicao (Rank 1-5):");
		scanf("%d", &bandas[i].posicao);

		printf("\n\n");

	}
	system("cls");
//imprimindo o que foi digitado
	for(i = 0 ; i < 5; i++)
	{
		printf("\n\n");
		printf("Banda :%d", i + 1);
		printf("\n");
		printf("Nome da banda %s ", bandas[i].nome_banda);
		printf("\n");
		printf("Tipo de musica : %s ", bandas[i].tipo_musica);
		printf("\n");
		printf("Numero de Integrantes :%d ", bandas[i].numero_integrante);
		printf("\n");
		printf("Rank :%d ", bandas[i].posicao);
		printf("\n");
	}
	
	//repeti��o
	do
	{
		printf("\n\n");
		printf("------------------------------------------\n");
		printf("------------------------------------------\n");
		printf(" 1 p/ mostrar banda pelo Rank\n");
		printf("2 p/ mostrar a banda que est�o repetindo o tipo\n");
		printf("3 P/ verificar se a banda est� cadastrada\n");
		printf("4 p/ sair");
		printf("------------------------------------------\n");
     	printf("------------------------------------------\n");
		printf("\n\n");
		printf("\n");
		//pergunta para entrar no case
		printf("Digite a opcao deseja :");
		scanf("%d", &pergunta);
		switch(pergunta)
		{

//colocar fun��o rank
		case 1:
			printf("\n\n");
			posicaorank();
			break;

// coloca fun��o caractere
		case 2:
			printf("\n\n");
			comparaString();
			break;
		case 3:
//verifica��o de fun��o cadastrada
			verificar();
			break;
		case 4:
			loop = 0;
			return 0;
			break;
default:
	printf("INVALIDO");
break;
		}
	}
	while(loop = 1);



	return 0;



}