/*
Criar um TAD que armazena nome e nota de um aluno e as operações:
criar novo aluno, acessar dados do aluno, liberar memória.
Criar uma aplicação que usa o TAD criado para ler a
média e a idade de 10 alunos. Guardar estes aluno em um vetor.
Depois, estes dados devem ser exibidos.
Depois imprimir a média da turma
*/

#include <stdio.h>
#include <stdlib.h>
#include "aluno.c"

int main() {
	Aluno *aluno, turma[10]; 
	char nomeDoAluno[30];
	float notaDoAluno,media,soma;
	int contador;
	for(contador=0;contador<10;contador++){
		printf("Nome do aluno: ");
		fflush(stdin);
		gets(nomeDoAluno);
		printf("Nota do aluno: ");
		scanf("%f",&notaDoAluno);
		aluno = criar(nomeDoAluno,notaDoAluno);
		turma[contador] = *aluno;
	}
	soma=0;
	for(contador=0;contador<10;contador++){
		aluno = &turma[contador];
		acessar(aluno,nomeDoAluno,&notaDoAluno);
		printf("\nnome do aluno: %s, nota: %f",nomeDoAluno,notaDoAluno);
		soma = soma + notaDoAluno;
	}
	media = soma/10;
	printf("\n\nMedia da turma = %.2f",media);
	return 0;
}