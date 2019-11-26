#include <stdlib.h>
#include <stdio.h>

int i,d,m;
float maior=0,md,maiorm=0;
struct alunos
{
char nome[21];
int matri;
float n1,n2,n3;	
}al[2];

int main()

{
	printf("\n--- ENTRE COM OS DADOS DOS ALUNOS ---\n");
	for(i=0; i <2 ; i++)
	{
	printf("\n NOME :");
	scanf("%s", &al[i].nome);
	printf("\n MATRICULA :");
	scanf("%d", &al[i].matri);
	printf("\n NOTA 1 :");
	scanf("%f", &al[i].n1);
	printf("\n NOTA 2 :");
	scanf("%f", &al[i].n2);
	printf("\n NOTA 3 :");
	scanf("%f", &al[i].n3);	
	
	if(maior < al[i].n1)
	{
	maior=al[i].n1;
	d=i;	
	}
	
	md = (al[i].n1 + al[i].n2 + al[i].n3)/3;
	
	if(maiorm < md)
	{
		maiorm = md;
		m=i;
	}
	
	
	}
	
	printf("\n \n maior nota 1 : %.2f \n", maior);
	printf("\n aluno : %s", al[d].nome);
	
		printf("\n \n maior media : %.2f \n", maiorm);
	printf("\n aluno : %s \n\n", al[m].nome);
	
	
	
		system("pause");
	return 0;
}