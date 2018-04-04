// Marco Aurélio Martins Bessa
// Exemplo de uso do TAD Pilha para resover um exercicio de inversão de palavras
//

#include <locale.h>
#include <stdio.h>
#include "pilha.c"


// vavriáveis com escopo 
char  palavra[TAMANHO];
char  invertida[TAMANHO];
Pilha *mainPilha;	

// empilha a escrevendo na palavra
void empilhaPalavra () {
	int i;
   	for (i = 0; palavra[i] != '\0'; ++i) {
    	push(mainPilha, palavra[i]);
    }
	printf("\nA palavra empilhada é: %s", palavra);
}
		
// desempilha invertendo a palavra
void desempilhaPalavra () {
	//Pilha *p = criapilha();
	int i;
   	for (i = 0; palavra[i] != '\0'; ++i) {
   		invertida[i] = pop(mainPilha);
    }
}


// lê a palavra do teclado 
void leString() {
	printf("\nEntre com a palavra para ser invertida: ");
	fflush(stdin);
	gets(palavra);
	// apenas para verificação
	printf("\nA palavra lida é: %s", palavra);
}


// imprime a palavra invertida
void imprimeString() {
	// apenas imprime na tela a palavra invertida 
	printf("\nA palavra invertida é: %s", invertida);
}
//


// programa principal 
//
int main() {
	setlocale(LC_ALL,"");
	//
	mainPilha = criapilha();
	//
	leString();
	empilhaPalavra();
	desempilhaPalavra();
	imprimeString();
	//
	liberar(mainPilha);
}
