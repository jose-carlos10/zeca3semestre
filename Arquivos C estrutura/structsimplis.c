#include <stdlib.h>
#include <stdio.h>


struct funcionario
{
char nome[21],sexo[2],cargOc[31];
int idade,setor;
long int cpf;
int dataN;
float salario;	
}f1;

int main()

{
	printf("\n--------CADASTRO DO FUNCIONARIO \n\n\n\n");
	
	
	printf("\n DIGITE O NOME :");
	scanf("%s", &f1.nome );
	
	printf("\n SEXO (M/F) ");
	scanf("%s", &f1.sexo );
	
	printf("\n O CARGO QUE OCUPA :");
	scanf("%s", &f1.cargOc );
	
	printf("\n A IDADE :");
	scanf("%d", &f1.idade );
	
	printf("\n O CPF :");
	scanf("%dll", &f1.cpf );
	
	printf("\n O SETOR :");
	scanf("%d", &f1.setor );
	
	printf("\n O SALARIO : ");
	scanf("%f", &f1.salario );
	f1.dataN=(2019-f1.idade);
	
	printf("\n nome    --------- %s", f1.nome);
	printf("\n sexo    --------- %s", f1.sexo);
	printf("\n cargo   --------- %s", f1.cargOc);
	printf("\n idade   --------- %d", f1.idade);
	printf("\n cpf     --------- %dll", f1.cpf);
	printf("\n setor   --------- %d", f1.setor);
	printf("\n salario --------- %.2f", f1.salario);
	printf("\n data nasc---------%d", f1.dataN);
		return 0;
}