#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//variaveis globais
int inicio,meio,fim,procura;
int vet[],tam=5,x;
char auxi[30];
struct aluno
{
char nome[30];
int matri;	
}al[5];


void selec(){
	printf("\n\n\n tam %d",tam);
int j,i,aux,temp[5];
for(i=0;i < tam -1; i++){
aux=i;
for(j=i+1; j < tam; j++ ){
	if(al[aux].matri > al[j].matri){
		aux=j;
	}
	temp[i]=al[aux].matri;
	al[aux].matri=al[i].matri;
	al[i].matri=temp[i];
	
	strcpy(auxi,al[aux].nome);
	strcpy(al[aux].nome,al[i].nome);
	strcpy(al[i].nome,auxi);
	
}	
}	
	
}

void pesquisa(){
inicio=0;
fim= 5 - 1;
meio=(inicio + fim)/2;
while(procura != al[meio].matri && inicio != fim){

if(procura > al[meio].matri){
inicio=meio+1;
} else {
fim=meio;
}
meio=(inicio+fim)/2;

}
if(al[meio].matri==procura){
printf("\nValor encontrado\n");
printf("\n NA POSICAO  %d  MATRICILA  %d\n",meio+1,al[meio].matri);
printf("\n NOME : %s",al[meio].nome);

} else {

printf("\nValor não encontrado\n");

}
}



int main()
{
	
	
/*scanf("%s",&al[0].nome);
strcpy(auxi,al[0].nome);

printf("\n\n %s", auxi);*/	
	
	
	
	printf("cadastro 5 alunos respectivamente \n\n");
	for(x=0; x < 5; x++){
		printf("\n \n NOME :");
		scanf("%s", &al[x].nome);
		printf("\n MATRICULA :");
		scanf("%d", &al[x].matri);
		printf("\n");
	}
	selec();
	printf("\n\n ORDENAÇÃO DE VALORES \n");
	
	for (x=0; x < tam; x++){
		printf("\n MATRICULA___ %d ___ -- NOME __ %s \n", al[x].matri,al[x].nome);
	}
	
	printf("\n\n DIGITE A MATRICULA QUE DESJA PROCURAR :");
    scanf("%d", &procura);
    pesquisa();

    printf("\n\n ");
    system("pause");
	
	return 0;
}