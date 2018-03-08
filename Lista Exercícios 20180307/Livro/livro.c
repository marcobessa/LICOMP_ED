/* 
Aluno:  Marco Bessa 

Problema: 

A - Criar um TAD livro, que contém os elementos: título, ano de edição, número de páginas e preço.
B - Criar as operações criar, acessar e liberar. 
C - Faça um programa que usa o TAD criado para ler e armazenar em vetor dados de 5 livros. 
    Imprimir a média do número de páginas dos livros.
*/

#include <string.h>
#include <stdlib.h>
#include "livro.h"

struct livro {
	char  titulo[30];
	int   anoEdicao;
	int   nroPagina;
	float preco;
};

Livro* criar(char *titulo, int anoEdicao, int nroPagina, float preco){
	Livro *liv = (Livro*) malloc(sizeof(Livro));
	if(liv!=NULL){
		strcpy(liv->titulo,titulo);
		liv->anoEdicao = anoEdicao;
		liv->nroPagina = nroPagina;
		liv->preco = preco;
	}
	return liv;	
}

void acessar(Livro *livro, char *titulo, int *anoEdicao, int *nroPagina, float *preco) {
	strcpy(titulo,livro->titulo);
	*anoEdicao = livro->anoEdicao;
	*nroPagina = livro->nroPagina;
	*preco     = livro->preco;
}

void liberar(Livro *livro){
	free(livro);
}
