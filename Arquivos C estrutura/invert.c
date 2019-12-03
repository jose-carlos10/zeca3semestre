#include <stdio.h>
#include<stdlib.h>
int main() {
    char pilha[101];
    int i;
    int reverter_pilha = 0;
    char pilha_inversa[101];
    
    printf("Digite uma pilha: ");
        fflush(stdin);
    gets(pilha);
    
    //preenchendo a string pilha
    for(i=0;pilha[i]!='\0';i++){
        reverter_pilha ++;
    }
    //quando chega aqui fora, cont_pilha tem um caracter a mais contando com o '/0'
    reverter_pilha --;
    
    for(i=0;pilha[i]!='\0';i++){
      
	    pilha_inversa[reverter_pilha]=pilha[i];
	    reverter_pilha --;
    }
    printf ("\n Pilha: %s ",pilha);
    printf("\n Pilha invertida: %s", pilha_inversa);
    return 0;
}