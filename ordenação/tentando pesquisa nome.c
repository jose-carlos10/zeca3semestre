#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int inicio,meio,fim,tam,nomeVetor[],x,perg;
int vet[],tam=5,x,r,z;
char proc[30],auxi[30],nome[30];
#define TAM 5; // Define o tamanho do vetor;

void pesquisa(){
inicio=0;
fim= 5 - 1;
meio=(inicio + fim)/2;

while(strcmp(proc,al[meio].nome)!=0 && inicio != fim){

if(strcmp(proc,al[meio].nome)>0){
inicio=meio+1;
} else {
fim=meio;
}
meio=(inicio+fim)/2;

}
if(strcmp(proc,al[meio].nome)==0){
printf("\nValor encontrado\n");
printf("\n NA POSICAO  %d  MATRICILA  %d\n",meio+1,al[meio].matri);
printf("\n NOME : %s",al[meio].nome);

} else {

printf("\nValor não encontrado\n");

}
}

int main()
   {
   	for (i=0; i < 5; i++){
		   scanf("%s", &nome[i]);
		   printf("\n");
	   }
printf("\n digite o nome para pesquisa");
   scanf("%s", &proc);
   
   pesquisa();	
   	 printf("\n\n ");
    system("pause");
   	
   	return 0;
   }