#include <stdlib.h>
#include <stdio.h>

int main()
{
	float *t,*t2,maior=0,m; int tam, i;
	
printf(" qual tamanho do vetor ?");
scanf("%d", &tam);
	//alocando memoria
	t = (int*)malloc(tam * sizeof(int));
	t2 = (int*)malloc(tam * sizeof(int));	
	//testando se alocou corretamente
	
	if(t == NULL) 
	{
		printf(" memoria cheia \n");
	}
		if(t2 == NULL) 
	{
		printf(" memoria cheia \n");
	}
	
	for(i=0; i < tam; i++)
	{
		printf("qual nota 1 do aluno %d ",i+1);
		scanf("%f", &t[i]);
		printf("qual nota 2 do aluno %d ",i+1);
		scanf("%f", &t2[i]);	
		if(maior < t[i]){
			maior=t[i];
		}if(maior < t2[i]){
			maior=t2[i];
		}
		printf(" a media do aluno %d e : %.2f \n\n",i+1, m=(t[i]+t2[i])/2 );
	}
	
	
	printf("maior nota >>> %.2f\n", maior);
//liberando memoria	
	free(t);
		free(t2);
	
	return 0;
}