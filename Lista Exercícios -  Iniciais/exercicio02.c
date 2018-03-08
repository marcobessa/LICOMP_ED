// Exercício 2 - aula dia 07/02/2018
/* 2. (while) Escreva um programa capaz de mostrar na tela 
	do computador a sequência de números 1 a 100.
*/

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int contador = 1;
	while(contador < 101){
		printf("%i\n",contador);
		contador++;
	}
}
