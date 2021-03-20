#ifndef STACK_2_H
#define STACK_1_H
#define TAMANHO 100

//NICOLAS DE BARROS - TIA : 32070837
// ARQUIVO .H

typedef struct StaticStack
{
	int count = 0;
	char values[TAMANHO];
} pilha;


int IsEmpty(pilha* pilha_var);

int push(pilha* pilha_var, char elem);

char pop(pilha* pilha_var);

char top(pilha* pilha_var);

int size(pilha* pilha_var);

int count(pilha* pilha_var);

int clear(pilha* pilha_var);



#endif // !STACK_2_H


