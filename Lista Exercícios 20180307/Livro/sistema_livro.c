/*
Teste para o - TAD livro -  do exercicio do dia 07/03/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "livro.c"

int main() {
	
	setlocale(LC_ALL,"");
	Livro *livro, colecao[5]; 
	 
	char  titulo[30];
	int   anoEdicao;
	int   nroPagina;
	float preco,mediaPaginas,somaPaginas;
	int   ind;
	somaPaginas=0;

	for(ind=0;ind<5;ind++){
		printf("\n\nT�tulo do Livro: ");
		fflush(stdin);
		gets(titulo);
		printf("\nAno de Edi��o do livro: ");
		scanf("%d",&anoEdicao);
		printf("\nNumero de P�ginas do livro: ");
		scanf("%d",&nroPagina);
		printf("\nPre�o do livro: ");
		scanf("%f",&preco);
		livro = criar(titulo, anoEdicao, nroPagina, preco);
		colecao[ind] = *livro;
		somaPaginas = somaPaginas + nroPagina;
	}
	mediaPaginas = somaPaginas / 5;
	printf("\n\nMedia de P�ginas  = %.2f", mediaPaginas);
	return 0;
}
