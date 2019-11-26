#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	struct funcionario{
		char nome[31],cargo[5],sexo[2],dataN[10];
		float sal;
		int idade,setor;
		long int cpf;
	};
	
	struct funcionario f1;
	
	printf("\nจจจจจจจจจจ Cadastro de funcionario จจจจจจจจจจ\n\n\n");
	
	printf("Nome do funcionario: ");
		fflush(stdin);
	   		fgets(f1.nome, 31, stdin);
	
	printf("Idade: ");
		scanf("%d", &f1.idade);
	
	printf("Sexo {M/F}: ");
		fflush(stdin);
			fgets(f1.sexo,2, stdin);
	
	printf(" CPF : ");
	   	scanf("%dll", &f1.cpf);
	
	printf(" Data de Nascimento : ");
		scanf("%s", &f1.dataN);
	
	printf("Setor: ");
		scanf("%d", &f1.setor);
	
	printf("Cargo: ");
		fflush(stdin);
	   	   	fgets(f1.cargo,30, stdin);
	
	printf("Salario: ");
	scanf("%f", &f1.sal);
	
	printf("\n\n จจจจจจจจจจจจPrint dos dados do funcionario จจจจจจจจจจ\n\n");
	printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");

	printf("Nome do funcionario: %s",f1.nome);
	printf("\nIdade: %d",f1.idade);
	printf("\nSexo [M/F]: %s",f1.sexo);	
	printf("\nCPF: %dll",f1.cpf);
	printf("\nData de Nascimento: %s",f1.dataN);
	printf("\nSetor: %d",f1.setor);
	printf("\nCargo: %s",f1.cargo);
	printf("\nSalario: %.2f",f1.sal);	
	
	return 0;
}