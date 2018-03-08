#include <string.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno {
	char nome[30];
	float nota;
};

Aluno* criar(char *nomeDoAluno, float notaDoAluno){
	Aluno *a = (Aluno*) malloc(sizeof(Aluno));
	if(a!=NULL){
		strcpy(a->nome,nomeDoAluno);
		a->nota = notaDoAluno;
	}
	return a;	
}

void acessar(Aluno *aluno, char *nomeDoAluno, float *notaDoAluno) {
	strcpy(nomeDoAluno,aluno->nome);
	*notaDoAluno = aluno->nota;
}

void liberar(Aluno *aluno){
	free(aluno);
}