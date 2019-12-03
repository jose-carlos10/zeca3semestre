#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>>

//DECLARAÇÃO DE FUNÇÕES
void menor_numero();
void pessoa_mais_velha();
void pessoa_mais_nova();
void contar_consoantes();
void contar_vogais();
void media_idade();
void criar_arquivo_inverter();

//DECLARAÇÃO DE VARIAVEIS GLOBIAS

int main(){
	//para colocar em portuguese
	setlocale(LC_ALL, "Portuguese");	
	//declaração de var
	int opcao;
	
	while(opcao!=99){
		//MENU -----------------------------------------------------------------------
		system("CLS");
			printf("\n ----------------------MENU DE OPÇÕES-------------------------");
			printf("\n|                                                            |");
			printf("\n|           [1] - MODIFICAR MATRIZ                           |");
			printf("\n|           [2] - PESSOAS MAIS VELHA                         |");
			printf("\n|           [3] - PESSOAS MAIS NOVA                          |");
			printf("\n|           [4] - CONTAR CONSOANTES DO ARQUIVO               |");
			printf("\n|           [5] - CONTAR VOGAIS DO ARQUIVO                   |");
			printf("\n|           [6] - MÉDIA DA IDADE DAS PESSOAS                 |");
			printf("\n|           [7] - CRIAR ARQUIVO E INVERTER PALAVRA NELE      |");
			printf("\n|           [99] - SAIR DO PROGRAMA                          |");
			printf("\n|                                                            |");
			printf("\n ------------------------------------------------------------\n ");
			printf("ESCOLHA UMA OPÇÃO>>>>>>>>>");
			printf("\n  OPÇÃO: ");
			scanf("%d",&opcao);
			printf("\n");
		//MENU -----------------------------------------------------------------------
		//ENTRADA
		switch(opcao){
		case 1:
			menor_numero();
			break;
		case 2:
			pessoa_mais_velha();
			break;
		case 3:
			pessoa_mais_nova();
			break;
		case 4:
			contar_consoantes();
			break;
		case 5:
			contar_vogais();
			break;
		case 6:
			media_idade();
			break;
		case 7:
			criar_arquivo_inverter();
			break;
		case 8:
			break;
		case 99:
			break;
		default:
			printf("OPÇÃO INVALIDA!\n\n\n");
			system("PAUSE");
		}
	}//FIM DO LAÇO DE REPETIÇÃO
	return 0;
}



//FUNÇÕES=======================================================================

//FUNÇÃO 1
void menor_numero(){
	//DECLARAÇÃO DE VARIAVEIS DA FUNÇÃO
		//Constantes
		const int qtd_linha=2;
		const int qtd_coluna=3;
		//Vetores
		int matriz[qtd_linha][qtd_coluna];
		int matrizR[qtd_linha][qtd_coluna];
		//Contadores
		int linha=0,coluna=0,menor1=0,menor2=0;
		
		//INICIALIZAR 
		matriz[0][0]=0;
		menor1=matriz[0][0];
		menor2=matriz[0][0];
		//ENTRADA DE DADOS
		for(linha=0;linha<qtd_linha;linha++){
			for(coluna=0;coluna<qtd_coluna;coluna++){
			printf("INSIRA O VALOR NA L[%d] C[%d]: ",linha+1,coluna+1);
				   scanf("%d",&matriz[linha][coluna]);
				   //LOGICA MENOR
				   if(linha==0){
					   menor1=matriz[linha][coluna];
				   }
					if(linha==1){
							menor2=matriz[linha][coluna];
					}
				   //FIM LOGICA MENOR  		
			}
		}
		//LOGICA----------------------------------------------------------------
		for(linha=0;linha<qtd_linha;linha++){
			for(coluna=0;coluna<qtd_coluna;coluna++){
				if(linha==0){
					matrizR[linha][coluna]=matriz[linha][coluna]/menor1;
				}
				if(linha==1){
					matrizR[linha][coluna]=matriz[linha][coluna]/menor2;	
				}
			}
		}//---------------------------------------------------------------------
		printf("\n\nMENOR1: %d>>>",menor1);
		printf("\n\nMENOR2: %d>>>",menor2);
		
		//APRESENTAÇÃO----------------------------------------------------------
		for(linha=0;linha<qtd_linha;linha++){
			if(linha==0){
				printf("\n");
				printf("----------MATRIZ ORIGINAL----------\n");
			}
			for(coluna=0;coluna<qtd_coluna;coluna++){
				printf("        %d  ",matriz[linha][coluna]);
			}
			printf("\n");
		}
		for(linha=0;linha<qtd_linha;linha++){
			if(linha==0){
				printf("\n");
				printf("----------MATRIZ RESULTADO----------\n");
			}
			for(coluna=0;coluna<qtd_coluna;coluna++){
				printf("        %d  ",matrizR[linha][coluna]);
			}
			printf("\n");
		}
		
	//FINAL DA FUNÇÃO
	system("PAUSE");
}//FIM DA FUNÇÃO----------------------------------------------------------------

void pessoa_mais_velha(){
	//DECLARAÇÃO DE VARIAVEIS DA FUNÇÃO
		//Constantes
		const int qtd_nomes=5;
		const int qtd_char=50;
		const int qtd_vet=5;
		//Vetores
		
		int idade[qtd_vet];
		int mais_velho=0;
		//Matrizes
		char nomes[qtd_nomes][qtd_char];
		//Contadores
		int posicao=0,linha=0,coluna=0,p_velho=0,imprimiu=0;
		
		//INICIALIZAR
		idade[0]=0;
		mais_velho=idade[0];
	
	//ENTRADA DE DADOS
	for(posicao=0;posicao<qtd_vet;posicao++){
		printf("INSIRA O %dº NOME: ",posicao+1);
			scanf("%s",&nomes[posicao]);
		printf(">INSIRA A IDADE: ",posicao+1);
			scanf("%d",&idade[posicao]);	
	}
	//PROCESSAMENTO E LÓGICA
	for(posicao=0;posicao<qtd_vet;posicao++){
		//CONTAR A IDADE DO MAIS VELHO
		if(idade[posicao]>mais_velho){
			mais_velho=idade[posicao];	
		}	
	}
	
	//APRESENTAÇÃO----------------------------------------------------------
	printf("\n-----------------RESULTADO-----------------\n");
	//PESSOAS MAIS VELHAS------------------------------------------------------
	for(posicao=0;posicao<qtd_vet;posicao++){
		if(idade[posicao]==mais_velho){
			if(posicao==0){
					printf("\n----------PESSOA(S) MAIS VELHA(S)----------\n");//PARA PULAR UMA LINHA QUANDO CHEGAR NA E
					imprimiu++;//PARA NÃO IMPRMIR MAIS ESSA LINHA
			}
			printf("A PESSOA MAIS VELHA É: %s\n",nomes[posicao]);
			printf(">E SUA IDADE É: %d\n",mais_velho);
		}
	}
	
	//RESTANTE DAS PESSOAS------------------------------------------------------
	printf("--------------OUTRAS PESSOAS---------------\n");
	for(posicao=0;posicao<qtd_vet;posicao++){
		if(idade[posicao]!=mais_velho){
		//TODAS AS PESSOAS	
		printf(">NOME: %s | IDADE: %d \n",nomes[posicao],idade[posicao]);	
		}
	}	
			
	//FINAL DA FUNÇÃO
	system("PAUSE");
}//FIM DA FUNÇÃO----------------------------------------------------------------

void pessoa_mais_nova(){//------------------------------------------------------
	//DECLARAÇÃO DE VAR		
		//Constantes
		const int qtd_nomes=5;
		const int qtd_char=50;
		const int qtd_vet=5;
		//Vetores
		
		int idade[qtd_vet];
		int mais_novo=0;
		//Matrizes
		char nomes[qtd_nomes][qtd_char];
		//Contadores
		int posicao=0,linha=0,coluna=0,p_velho=0,imprimiu=0;
		
		//INICIALIZAR
		idade[0]=9999999999;
		mais_novo=idade[0];
	
	//ENTRADA DE DADOS
	for(posicao=0;posicao<qtd_vet;posicao++){
		printf("\nINSIRA O %dº NOME: ",posicao+1);
			scanf("%s",&nomes[posicao]);
		printf(">INSIRA A IDADE: ",posicao+1);
			scanf("%d",&idade[posicao]);	
	}
	
	//PROCESSAMENTO E LÓGICA
	for(posicao=0;posicao<qtd_vet;posicao++){
		//CONTAR A IDADE DO MAIS NOVO
		if(idade[posicao]<=mais_novo){
			mais_novo=idade[posicao];
			printf("\n+NOVO: %d\n",mais_novo);	   	
		}	
	}
		
	//APRESENTAÇÃO----------------------------------------------------------
	printf("\n-----------------RESULTADO-----------------\n");
	for(posicao=0;posicao<qtd_vet;posicao++){
		if(idade[posicao]==mais_novo){
			if(posicao==0){
					printf("\n----------PESSOA(S) MAIS NOVA(S)-----------\n");//PARA PULAR UMA LINHA QUANDO CHEGAR NA E
					imprimiu++;//PARA NÃO IMPRMIR MAIS ESSA LINHA
			}
			printf("A PESSOA MAIS VELHA É: %s\n",nomes[posicao]);
			printf(">E SUA IDADE É: %d\n",mais_novo);
		}
	}
	
	//RESTANTE DAS PESSOAS------------------------------------------------------
	printf("--------------OUTRAS PESSOAS---------------\n");
	for(posicao=0;posicao<qtd_vet;posicao++){
		if(idade[posicao]!=mais_novo){
		//TODAS AS PESSOAS	
		printf(">NOME: %s | IDADE: %d \n",nomes[posicao],idade[posicao]);	
		}
	}	
			
	//FINAL DA FUNÇÃO
	system("PAUSE");
}//FIM DA FUNÇÃO----------------------------------------------------------------


void contar_consoantes(){
	//DECLARAÇÃO DE VARIAVEIS DA FUNÇÃO
		//Strings
		char palavra[50];
		//Contadores
		int i=0,tamanho=0,cont=0;
	//criando a variavel ponteiro para o arquivo
	FILE *pont_arq;
	
	//abrindo o arquivo com tipo de abertura r=poder LER
	pont_arq = fopen("prova.txt","r");
	
	//ENQUANTO NÃO FOR FIM DE ARQUIVO O LOOPING IRÁ CONTINUAR LER
	//O TEXTO QUANDO ACABAR ELE IRÁ ENCONTRAR NULO
	printf("As palavras lidas foram: ");
	while(fgets(palavra, 50, pont_arq)!= NULL)
	{
		printf("%s\n",palavra);
	}
	printf("\n");

	//--------------------------------------------------------FIM
	//fechando o arquivo
	fclose(pont_arq);
	printf("\nDADOS LIDOS COM SUCESSO!\n");
	
	tamanho = strlen(palavra);

	for(i = 0; i  <= tamanho  ; i++){
		if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' && palavra[i] != ' '){
			cont++;
		}
	}
	printf("AS PALAVRAS LIDAS TEM: %d CONSOANTES \n\n", cont-1);	
	
	//FINAL DA FUNÇÃO
	system("PAUSE");
}//FIM DA FUNÇÃO----------------------------------------------------------------

void contar_vogais(){
	//DECLARAÇÃO DE VARIAVEIS DA FUNÇÃO
		//Strings
		char palavra[50];
		//Contadores
		int i=0,tamanho=0,cont=0;
	//criando a variavel ponteiro para o arquivo
	FILE *pont_arq;
	
	//abrindo o arquivo com tipo de abertura r=poder LER
	pont_arq = fopen("prova.txt","r");
	
	//ENQUANTO NÃO FOR FIM DE ARQUIVO O LOOPING IRÁ CONTINUAR LER
	//O TEXTO QUANDO ACABAR ELE IRÁ ENCONTRAR NULO
	printf("As palavras lidas foram: ");
	while(fgets(palavra, 50, pont_arq)!= NULL)
	{
		printf("%s\n",palavra);
	}
	printf("\n");

	//--------------------------------------------------------FIM
	//fechando o arquivo
	fclose(pont_arq);
	printf("\nDADOS LIDOS COM SUCESSO!\n");
	
	tamanho = strlen(palavra);

	for(i = 0; i  <= tamanho  ; i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == ' '){
			cont++;
		}
	}
	printf("AS PALAVRAS LIDAS TEM: %d CONSOANTES \n\n", cont-1);	
	
	//FINAL DA FUNÇÃO
	system("PAUSE");
}//FIM DA FUNÇÃO----------------------------------------------------------------

void media_idade(){
	//DECLARAÇÃO DE VAR		
		//Constantes
		const int qtd_nomes=5;
		const int qtd_char=50;
		const int qtd_vet=5;
		//Vetores
		
		int idade[qtd_vet];
		int mais_novo=0;
		//Matrizes
		char nomes[qtd_nomes][qtd_char];
		//Contadores
		int posicao=0,linha=0,coluna=0;
		float media=0.0;
		
		//INICIALIZAR
		idade[0]=9999999999;
		mais_novo=idade[0];
	
	//ENTRADA DE DADOS
	for(posicao=0;posicao<qtd_vet;posicao++){
		printf("INSIRA O %dº NOME: ",posicao+1);
			scanf("%s",&nomes[posicao]);
		printf(">INSIRA A IDADE: ",posicao+1);
			scanf("%d",&idade[posicao]);	
	}
	
	//PROCESSAMENTO E LÓGICA
	for(posicao=0;posicao<qtd_vet;posicao++){
		//FAZER A MEDIA DAS IDADES
		media=media+idade[posicao];	
	}
	//MEDIA
	media=(media/qtd_vet);
		
	//APRESENTAÇÃO----------------------------------------------------------
	printf("\n-----------------RESULTADO-----------------\n");
	for(posicao=0;posicao<qtd_vet;posicao++){
		//TODAS AS PESSOAS	
		printf(">NOME: %s | IDADE: %d \n",nomes[posicao],idade[posicao]);
	}
	
	//RESTANTE DAS PESSOAS------------------------------------------------------
	printf("--------------MEDIA DE IDADES---------------\n");
	printf(">A MÉDIA DE IDADE É: %.2f \n",media);	

	//FINAL DA FUNÇÃO
	system("PAUSE");	
}//FIM DA FUNÇÃO----------------------------------------------------------------

void criar_arquivo_inverter(){
	//DECLARAÇÃO DE VARIAVEIS DA FUNÇÃO
		//Strings
		char palavra[50];
		char palavraInvertida[50];
		//Contadores
		int i=0,tamanho=0,cont=0,posicao=0,qtd_palavra=3;
	//CRIAR ARQUIVO DE TEXTO
		//criando a variavel ponteiro para o arquivo
		FILE *pont_arq;
		//abrindo o arquivo com tipo de abertura a=poder criar e escrever
		pont_arq = fopen("texto.txt","w");
		
	//--------------------------------------------------------FIM
	
	//ESCREVER PALAVRAS NO TXT
		for(posicao=0;posicao<qtd_palavra;posicao++){
			printf("ESCREVA A %dª PALAVRA QUE VOCÊ QUER GRAVAR NO TEXTO:  ",posicao+1);
				scanf("%s",&palavra);
			//USANDO F PRINT PARA ARMAZENAR A STRING NO ARQUIVO
				fprintf(pont_arq, " %s",palavra);	
		}
	//fechando o arquivo
		fclose(pont_arq);		
	
	//LENDO TEXTO QUE FOI CRIADO	
		//abrindo o arquivo com tipo de abertura r=poder LER
		pont_arq = fopen("texto.txt","r");
		//ENQUANTO NÃO FOR FIM DE ARQUIVO O LOOPING IRÁ CONTINUAR LER
		//O TEXTO QUANDO ACABAR ELE IRÁ ENCONTRAR NULO
		printf("As palavras lidas foram: ");
		while(fgets(palavra, 50, pont_arq)!= NULL)
		{	
			printf("%s\n",palavra);
			
		}
		printf("\n");
		
		//--------------------------------------------------------FIM
		//fechando o arquivo
		fclose(pont_arq);
		printf("DADOS LIDOS COM SUCESSO!\n");
		printf("CONTADOR: %d",cont);
	//INVERTER PALAVRA
	tamanho=strlen(palavra)-1;
	//palavra[tamanho]='\0';
	
	for(posicao=tamanho;posicao>=0;posicao--){
		palavraInvertida[cont]=palavra[posicao];
		cont++;
	}
	printf("\nPALAVRA ORIGINAL: %s\n",palavra);
	printf("\nPALAVRA INVERTIDA: %s\n",palavraInvertida);
	//FINAL DA FUNÇÃO
	system("PAUSE");
		
}//FIM DA FUNÇÃO----------------------------------------------------------------