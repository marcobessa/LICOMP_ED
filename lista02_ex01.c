#include <stdio.h>

void main() { 
	int x, *p; 
	p = &x; 
	x = 10;
	printf("valor do conte�do de p: %d\n", *p);
}
