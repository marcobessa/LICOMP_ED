#include <stdio.h>

main ( ) { 
	int x, *p; 
	x=10; 
	p=x; 
	printf( "%d\n", *p); 
}

// Est� incorreto porque quando p recebe o valor de x
// recebe o valor de x e n�o o endere�o de x
// assim ao tentar imprimir o valor do conte�do de p
// o programa invade alguma �rea de mem�ria protegida
// e ocasiona um erro. 
