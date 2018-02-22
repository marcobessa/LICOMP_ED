// Exercício 3 - aula dia 07/02/2018
/* 3. (for) Escreva um programa para imprimir na tela todos
	os números ímpares de 299 a 101 em ordem decrescente.
*/

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	
	int contador;
	for(contador=299;contador>100;(contador-2))
		printf("%i\n",contador);	
}
