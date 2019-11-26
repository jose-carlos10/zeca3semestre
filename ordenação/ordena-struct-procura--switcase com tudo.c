#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int inicio,meio,fim,tam,procura,nomeVetor[],x,perg;
int vet[],tam=5,x,r,z;
char auxi[30];
#define TAM 5; // Define o tamanho do vetor;


struct aluno
{
char nome[30];
int matri;
	
}al[5];


OrdenaNome(){
int j,i,aux, temp[30];
for(i=0;i < tam -1; i++){
aux=i;
for(j=i+1; j < tam; j++ ){
r = strcmp(al[aux].nome,al[j].nome);
		  if(r > 0)	{
		strcpy(auxi,al[aux].nome);
     	strcpy(al[aux].nome,al[i].nome);
    	strcpy(al[i].nome,auxi);
	
    	temp[i]=al[aux].matri;
	    al[aux].matri=al[i].matri;
	    al[i].matri=temp[i];
			  	  
		  }	
}
}
z=2;
}

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
z=1;	
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

void cadastrar(){
printf("\ncadastrar alunos");
	   for (x=0; x<5; x++){
		printf("\n\n NOME :");
		scanf("%s", &al[x].nome);
		printf("\n\n MATRICULA :");
		scanf("%d", &al[x].matri);   
	   } 	
}

 int main()
   {
 
 	  	do
	{  	
   	printf("\n\n");
		printf("------------------------------------------\n");
		printf("------------------------------------------\n");
		printf(" 1 -- CADASTRAR\n");
		printf(" 2 -- ORDENAR POR CODIGO\n");
		printf(" 3 -- ORDENAR POR NOME\n");
		printf(" 4 -- MOSTRAR POR CODIGO");
		printf(" 5 -- MOSTRAR POR NOME");
		printf(" 6 -- PESQUISAR");
		printf(" 7 -- sair");
		printf("------------------------------------------\n");
     	printf("------------------------------------------\n");
		printf("\n\n");
		printf("\n");
   	    scanf("%d", &perg);
   	    switch(perg)
		   {
		   case 1:
		   	cadastrar();
			   break;
		   case 2:
		   	 selec(); // Chama a função de Ordenação;
			   break;
		   case 3:
		   	OrdenaNome();
			   break;
		   case 4:
		   	
		   	 printf("\n\n");

   	for (x=0; x < tam; x++){
		printf("\n MATRICULA___ %d ___ -- NOME __ %s \n", al[x].matri,al[x].nome);
	}
		   	
			   break;
		   case 5:
  	 printf("\n\n");

   	for (x=0; x < tam; x++){
		printf("\n MATRICULA___ %d ___ -- NOME __ %s \n", al[x].matri,al[x].nome);
	}
			   break;
		    case 6:
   printf("\n\n DIGITE MATRICULA QUE DESJA PROCURAR");
    scanf("%d", &procura);
    pesquisa();
			   break;
		    break;
		   case 7:
  	printf("\n\n PROGRAMA ENCERRADOO !!!");
			   break;
		   default:
		   	printf("\n\n OPÇÃO INVALIDA !!!");
			   break;
		   }
	}	while(perg != 7);
   	
   	   

    printf("\n\n ");
    system("pause");
   	
   	return 0;
   }