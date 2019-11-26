#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int inicio,meio,fim,tam,procura,nomeVetor[];

#define TAM 50 // Define o tamanho do vetor;
void fSelect_Sort(int *pVetor)
{
    int vMenor;
    int vAux;
    int vTemp;
    int vTroca;

    for(vAux=0; vAux < TAM-1; vAux++) // Percorre todo o vetor at� TAM-1, pois a ultima posi��o n�o precisa testar pois ja estara ordenada;
    {
        vMenor = vAux; // Menor valor recebe a posi��o que est� passando;

        for (vTemp=vAux+1; vTemp < TAM; vTemp++) // Percorre o vetor da posi��o vAux+1 at� o final;
        {
            if (pVetor[vTemp] < pVetor[vMenor]) // Testa se a posi��o que est� passando � menor que o menor valor;
            {
                vMenor = vTemp; // vMenor recebe a posi��o do menor valor;
            }
        }

        if (vMenor != vAux) // Se a posi��o for diferente da que est� passando, ocorre a troca;
        {
            vTroca         = pVetor[vAux];
            pVetor[vAux]   = pVetor[vMenor];
            pVetor[vMenor] = vTroca;
        }
    }
}

void pesquisa(int nomeVetor[]){
inicio=0;
fim= tam - 1;
meio=(inicio + fim)/2;
while(procura != nomeVetor[meio] && inicio != fim){

if(procura > nomeVetor[meio]){
inicio=meio+1;
} else {
fim=meio;
}
meio=(inicio+fim)/2;

}
if(nomeVetor[meio]==procura){
printf("\nValor encontrado\n");
printf("\n NA POSICAO  %d  NUMERO  %d\n",meio+1,nomeVetor[meio]);

} else {

printf("\nValor n�o encontrado\n");

}
}

 int main()
   { 
   	
   	
   	int vVetor[TAM]; // Declara o vetor
    int vAux;

    srand ( time(NULL) );
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = (rand() % 89) + 10; // Preenche o vetor aleat�riamente;
        printf(" %d,",vVetor[vAux]);
    }

    fSelect_Sort(vVetor); // Chama a fun��o de Ordena��o;

    printf("\n\n");

    for (vAux=0; vAux < TAM; vAux++)
    {
        printf("cresc - %d,",vVetor[vAux]);
    }
    
    printf("\n\n DIGITE VALOR QUE DESJA PROCURAR");
    scanf("%d", &procura);
    pesquisa(vVetor);

    printf("\n\n ");
    system("pause");
   	
   	return 0;
   }