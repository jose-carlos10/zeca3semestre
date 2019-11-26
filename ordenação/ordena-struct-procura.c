#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int inicio,meio,fim,tam,procura,nomeVetor[],x;

#define TAM 5; // Define o tamanho do vetor;


struct aluno
{
char nome[30];
int matri;
	
}al[5];

void OrdenaCod()
{
   int i, j;
   int aux[100];
   
   
  for(i=0;i < 5; i++){

for(j=i+1; j <tam; j++ ){
            if (al[i].matri > al[i+1].matri){                            
                aux = al[i];
                al[i] = al[i+1];
                al[i+1] = aux;             
            }
        }
    }
}

void pesquisa(){
inicio=0;
fim= tam - 1;
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
printf("\n NA POSICAO  %d  NUMERO  %d\n",meio+1,al[meio].matri);

} else {

printf("\nValor não encontrado\n");

}
}


 int main()
   {
   	
   	printf("\ncadastrar alunos");
	   for (x=0; x<5; x++){
		printf("\n\n NOME :");
		scanf("%s", &al[x].nome);
		printf("\n\n MATRICULA :");
		scanf("%d", &al[x].matri);   
	   } 
   	
   	
   	

    OrdenaCod(al); // Chama a função de Ordenação;

    printf("\n\n");

    for (x=0; x < 5; x++)
    {
        printf("cresc - %d,", al[x].matri);
    }
    
    printf("\n\n DIGITE MATRICULA QUE DESJA PROCURAR");
    scanf("%d", &procura);
    pesquisa();

    printf("\n\n ");
    system("pause");
   	
   	return 0;
   }