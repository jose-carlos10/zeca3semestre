
#include <stdio.h>
#include <stdlib.h>



main()
{	
	
	
	int i,c,con=0,qp=0,z=0,resp=0,loop;
	float vt;
	struct logistica
	{
		int cod;
		char nome[15];
		float prec;
		int quant;
		
	} prod[3];
	
		for(i = 0; i < 3; i++)
	{
		printf("=====================================\n");
		printf("\DADOS DO PRODUTO %d", i + 1);
		printf("\n=====================================\n");
		printf("DIGITE O NOME DO PRODUTO %d: ", i + 1);
		scanf("%s", &prod[i].nome);
		printf("DIGITE O CODIGO DO PRODUTO %d: ", i + 1);
		scanf("%d", &prod[i].cod);
		printf("DIGITE O PRECO DO PRODUTO : ");
		scanf("%f", &prod[i].prec);
		printf("DIGITE A QUANTIDADE DISPONIVEL 2: ");
		scanf("%d", &prod[i].quant);
		

	}
	printf("\n=====================================\n");
	printf("\n\n");
	
	for(i = 0; i < 3; i++)
	{
	printf("\n NOME   ---- %s", prod[i].nome );
	printf("\n CODIGO ---- %d", prod[i].cod );
	printf("\n PRECO  ---- %.2f", prod[i].prec );
	printf("\n=====================================\n");
	}
	
	
		printf("\n=====================================\n");
	printf("\n\n");
	do
	{
	   	printf("\n----- DESEJA ALGUM PRODUTO DA LOJA -----\n");
	   	printf("\n SE SIM DIGITE ( 1 ) SE NAO ( 0 )");
	   	scanf("%d", &resp);
	   	
		 if(resp == 0) {
			 return 0;
	   }
		  
		   	if(resp == 1){

			   	printf("\n INFORME O CODIGO DO PRODUTO DESJADO :");
	   	   	   	scanf("%d", &c);
	
				}
	
		
				//verificação do produto	
			for(i = 0; i < 3; i++){
				
				if(c == prod[i].cod){
					
				con=1;
				z = i;
			   	}
	
			}
			
			
		
			//quantidade
			if(con==1){
			printf("\n INFORME A QUANTIDADE DE PRODUTOS :");
			scanf("%d", &qp);
			

			if(qp <= prod[z].quant){
			prod[z].quant = prod[z].quant - qp;
			vt = qp * prod[z].prec;
			
			printf("\n O NOME DO PRODUTO : %s ", prod[z].nome );
			printf("\n A QUANTIDADE : %d", qp);
			printf("\n PRECO TOTAL A SER PAGO : %f\n", vt);	
			con=0;
			}
			
		
	
				
			}else{
			printf("\n Codigo de produto invalido !!");	
			con=2;
			
			}
			
		
		
		

	}while(con != 1);
	
	
	return 0;
}
