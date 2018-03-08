/*
Sistema para o - TAD Habitante -  do exercicio do dia 07/03/2018

Foi realizada uma pesquisa entre 500 habitantes de uma certa regi�o. De cada habitante foram
coletados os dados: idade, sexo, sal�rio e n�mero de filhos. Crie um TAD para armazenar estas
informa��es e as opera��es criar, acessar e liberar. Fa�a um programa que armazene as
informa��es digitadas pelo usu�rio na estrutura TAD criada. Depois imprima a m�dia de sal�rio
dos habitantes. Aten��o: para testar este programa considere apenas 5 habitantes.


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
		printf("\nSal�rio do Habitante: ");
		scanf("%f",&salario);
		habitante = criar(idade, sexo, nroFilhos, salario);
		pesquisa[ind] = *habitante;
		somaSalario = somaSalario + salario;
	}
	mediaSalario = somaSalario / 5;
	printf("\n\nMedia dos Sal�rios  = %.2f", mediaSalario);
	return 0;
}
