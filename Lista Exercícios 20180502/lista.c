// 02-05-2018
// Marco Aurélio Martins Bessa
// 

//https://www.cprogressivo.net/2013/10/Lista-em-C-como-excluir-elementos-do-inicio-e-do-final.html


// tarefa: implementar funções para:
// 1. inserir um elemento no final da lista .... ok 
// 2. excluir o último elemento da lista........
// 3. inserir um elemento na enésima posição....
// 4. excluir o enésimo elemento................




#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef struct no No;

struct no {
	int info;
	No *next;
};

No *lista = NULL;
    
No* getnode() {
	No* no = (No*) malloc(sizeof(No));
  	if(no==NULL) {
    	printf("\nMemória insuficiente!");
	    exit(0);
  	}
  	return no;
}          

void freenode(No *no){
	free(no);
}

void imprimeLista() {
	printf("\n\nConteúdo da lista: ");
	No *l = lista;
	while(l!=NULL){
		printf("%i ",l->info);
		l=l->next;
	}
}
//
// 1. inserir um elemento no final da lista 
//
void insereNoFimDaLista(int numero){
    // caso o inicio seja NULL chama insereNoInicio
	No *l = lista;
	if (l == NULL) {
		insereNoInicio(numero);
	}
	else {
    // vai até o fim da lista
		No *ultimo = NULL;
		while(l!=NULL){
			printf("%i ",l->info);
			ultimo = l;
			l=l->next;
		}
		No *p = getnode();
	    p->info = numero;
		p->next = NULL;
		ultimo->next = p;
	}
}
//
//
void insereNoInicio(int numero){
	No *p = getnode();
    p->info = numero;
	p->next = lista;
	lista = p;
}
//
// 2. Remover um elemento no final da lista 
//
int removeNoFimDaLista(){
	No *l = lista;
    // vai até o fim da lista
	No *ultimo = NULL;
	if (lista == NULL) {
		return 0;
	}
	while(l!=NULL){
		ultimo = l;
		l=l->next;
	}
	No *p = getnode();
    p->info = numero;
	p->next = NULL;
	ultimo->next = p;
}
//
////
//
int removeDoInicio(){
	No *p = lista;
	lista = p->next;
	int x = p->info;
	freenode(p);
	return x;
}

int main() {
	setlocale(LC_ALL,"");
	int numero;
    do {
        system("cls");
        printf("\nDigite um valor inteiro, ou zero para finalizar: ");
        scanf("%d",&numero);
        if(numero!=0 && numero < 10) {
            insereNoInicio(numero);  
        }
        if(numero > 10) {
            insereNoFimDaLista(numero);  
        }
    } while(numero!=0);   
    imprimeLista();
    
	printf("\nRemovendo do início da lista: %i",removeDoInicio());
	
	imprimeLista();
    
	return 0;
}

