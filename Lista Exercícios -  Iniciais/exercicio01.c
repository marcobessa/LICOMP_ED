// Exercício 1 - aula dia 07/02/2018
/* 1. (estrutura condicional) Escreva um programa para ler os valores de quatro
	números inteiros n1, n2, n3 e n4. Calcule e imprima o valor da média 
	aritmética dos mesmos. Imprimir também uma mensagem de "aprovado" ou reprovado"
	no caso da média ser maior ou igual a seis, ou menor, respectivamente.
*/
#include <locale.h>
#include <stdio.h>

void main() {
	setlocale(LC_ALL,"");
	int n1,n2,n3,n4;
	float media;
	printf("Digite a primeira nota: ");
	scanf("%i",&n1);
	printf("Digite a segunda nota: ");
	scanf("%i",&n2);
	printf("Digite a terceira nota: ");
	scanf("%i",&n3);
	printf("Digite a quarta nota: ");
	scanf("%i",&n4);
	media = (n1+n2+n3+n4)/4.0;
	printf("A média das quatro notas informadas é: %.2f",media);
	if (media >= 6) {
		printf("\nAluno foi aprovado!");
	}
	else {
		printf("\nAluno foi reprovado!");
	}
}
