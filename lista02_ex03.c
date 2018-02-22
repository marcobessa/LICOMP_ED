#include <stdio.h>

main ( ) { 
	int x, *p; 
	x=10; 
	p=x; 
	printf( "%d\n", *p); 
}

// Está incorreto porque quando p recebe o valor de x
// recebe o valor de x e não o endereço de x
// assim ao tentar imprimir o valor do conteúdo de p
// o programa invade alguma área de memória protegida
// e ocasiona um erro. 
