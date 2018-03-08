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
#include "habitante.h"

struct habitante {
	int   idade;
	int   sexo;   // 1-Masculino 2-Feminino
	int   nroFilhos;
	float salario;
};

Habitante* criar(int idade, int sexo, int nroFilhos, float salario){
	Habitante *hab = (Habitante*) malloc(sizeof(Habitante));
	if(hab!=NULL){
		hab->idade = idade;
		hab->sexo  = sexo;
		hab->nroFilhos = nroFilhos;
		hab->salario   = salario;
	}
	return hab;	
}

void acessar(Habitante *habitante, int *idade, int *sexo, int *nroFilhos, float *salario) {
	*idade     = habitante->idade;
	*sexo      = habitante->sexo;
	*nroFilhos = habitante->nroFilhos;
	*salario   = habitante->salario;
}

void liberar(Habitante *habitante){
	free(habitante);
}
