// Marco Bessa
// 
/*
Faça um programa que leia um valor inteiro n e crie dinamicamente um vetor de n elementos
do tipo inteiro. Em seguida o programa deve ler os elementos desse vetor. Depois, o vetor
preenchido deve ser impresso. Além disso, antes de finalizar o programa, deve-se liberar a área
de memória alocada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//
int main() { 
//
    setlocale(LC_ALL,"");
    
    int n, ind;
    
    printf("Entre com o tamnho do vetor: ");
    scanf("%d", &n);
    
    int *vetor_de_inteiros;
    
    vetor_de_inteiros = (int *) malloc ( sizeof  (int) * n );
    
    for (ind=0; ind < n; ind++) {
    	
    	printf("\nEntre com o elemento nro: %i ", ind);
    	scanf("%d", vetor_de_inteiros + ind);
    	
	}
	
	for (ind=0; ind < n; ind++ ) {
    	printf("\nO elemento nro: %i é o valor: %d", ind, *(vetor_de_inteiros + ind));
	}
    
    free(vetor_de_inteiros);
    
    return(0);
//	
}
