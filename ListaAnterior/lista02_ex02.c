#include <stdio.h>
void main( ) { 
	int x, *p; 
	x  = 10; 
	*p = x;
}
// primeiro p não foi inicializado com um endereço de uma váriável
// ao tentar colocar o valor de x em *p há um erro e o programa trava

