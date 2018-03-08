/*
Sistema para o - TAD Habitante -  do exercicio do dia 07/03/2018

Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada habitante foram
coletados os dados: idade, sexo, salário e número de filhos. Crie um TAD para armazenar estas
informações e as operações criar, acessar e liberar. Faça um programa que armazene as
informações digitadas pelo usuário na estrutura TAD criada. Depois imprima a média de salário
dos habitantes. Atenção: para testar este programa considere apenas 5 habitantes.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "habitante.c"

int main() {
	
	setlocale(LC_ALL,"");
	
	Habitante *habitante, pesquisa[500]; 
	int   idade;
	int   sexo;   // 1-Masculino 2-Feminino
	int   nroFilhos;
	float salario;
	float mediaSalario,somaSalario;
	int   ind;
	somaSalario=0;

	for(ind=0;ind<5;ind++){
		printf("\n\n Idade do Habitante: ");
		scanf("%d",&idade);
		printf("\nSexo do Habitante: 1 - Masculino  2-Feminino: ");
		scanf("%d",&sexo);
		printf("\nNumero de Filhos do Habitante: ");
		scanf("%d",&nroFilhos);
		printf("\nSalário do Habitante: ");
		scanf("%f",&salario);
		habitante = criar(idade, sexo, nroFilhos, salario);
		pesquisa[ind] = *habitante;
		somaSalario = somaSalario + salario;
	}
	mediaSalario = somaSalario / 5;
	printf("\n\nMedia dos Salários  = %.2f", mediaSalario);
	return 0;
}
