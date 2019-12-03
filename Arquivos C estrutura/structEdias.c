#include <stdlib.h>
#include <stdio.h>

int dias,mess, anos,t;
struct dma
{
int dia,mes,ano;	
}d1,d2;



int main()

{
	printf("\n ---- datas atuais --- \n");
	printf("\n digite o dia ");
	scanf("%d", &d1.dia);
	
	printf("\n digite o mes ");
	scanf("%d", &d1.mes);
	
	printf("\n digite o ano ");
	scanf("%d", &d1.ano);
	
	printf("\n ---- datas antiga --- \n");
	printf("\n digite o dia ");
	scanf("%d", &d2.dia);
	
	printf("\n digite o mes ");
	scanf("%d", &d2.mes);
	
	printf("\n digite o ano ");
	scanf("%d", &d2.ano);
	
	dias = (d1.dia-d2.dia);
	mess = 30*(d1.mes-d2.mes);
	anos = 360*(d1.ano-d2.ano);
	t= dias + mess + anos;
	printf("\n\n\n A DIFERENCA EM DIAS É : %d \n\n", t);
	
	system("pause");
	return 0;
}