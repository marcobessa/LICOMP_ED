#include <stdio.h>
#include <locale>
//
void main() { 
//
    setlocale(LC_ALL,"");
	int x, *p; 
	p = &x; 
	x = 10;
	printf("valor do conte�do de p: %d\n", *p);
//	
}
