
#include <stdio.h>
//Declaracao do registro
struct {
 char nome[35];
 int telefone;
} agenda[15];
//Funcao Principal
void main(){
 struct agenda;
 int op, i=0, alt;
 do{
 system("cls");//limpar tela
 printf("\nMenu de Opcoes");
 printf("\n1 - Cadastrar um num");
 printf("\n2 - Visualizar");
 printf("\n3 - Alterar");
 printf("\n4 - Sair");
 printf("\nDigite sua opcao: ");
 scanf("%d",&op);
 switch(op){
 case 1:
 printf("\nInforme nome: ");
 scanf("%s",agenda[i].nome);
 printf("\nInforme telefone: ");
 scanf("%d",&agenda[i].telefone);
 i++;
 break;
 case 2:
 for(i=0;i<15;i++){
 	if(agenda[i].telefone != 0){
 printf("\nNome: %s",agenda[i].nome);
 printf("\nTelefone: %d",agenda[i].telefone);
 printf("\n---------------------------------");
	 }
 }
 getch();
 break;
 case 3:
 printf("\nInforme codigo que deseja alterar:");
 scanf("%d",&alt);
 printf("\nNome: %s",agenda[alt].nome);
 printf("\nInforme NOVO nome: ");
 scanf("%s",agenda[alt].nome);
 printf("\nTelefone: %d",agenda[alt].telefone);
 printf("\nInforme NOVO telefone: ");
 scanf("%d",&agenda[alt].telefone);
 break;
 case 4:
 break;
 default:
 printf("\nOpcao invalida");
 break;
 }
 }while(op!=4);
}