#include <stdio.h>
void main( ) { 
	int x, *p; 
	x  = 10; 
	*p = x;
}
// primeiro p n�o foi inicializado com um endere�o de uma v�ri�vel
// ao tentar colocar o valor de x em *p h� um erro e o programa trava

