#include "Stack_2.h"
#include <string.h>

//NICOLAS DE BARROS - TIA : 32070837

int IsEmpty(pilha* pilha_var)
{
	return (*pilha_var).count == 0;
}

int push(pilha* pilha_var, char elem)
{
	//pilha cheia (erro)
	if ((*pilha_var).count == TAMANHO)          //se o currente chegou no limite da stack (8)
	{
		return 1;
	}

	// REVER O PUSH /// 

	(*pilha_var).values[(*pilha_var).count] = elem;        // irá add o elemento (elem)
	(*pilha_var).count++;

	return 0;
}

char pop(pilha* pilha_var)
{
	if (IsEmpty(pilha_var))
	{
		return '\0';                  //erro se a pilha estiver vazia
	}

	char temp = (*pilha_var).values[(*pilha_var).count - 1];			//guarda o elemento no topo antes de excluir
	(*pilha_var).values[(*pilha_var).count - 1] = '\0';
	(*pilha_var).count--;

	return temp;								//retorna qual foi excluido (o topo)			
}

char top(pilha* pilha_var)
{
	if (IsEmpty(pilha_var))
	{
		//pilha vazia (erro)
		return '\0';
	}

	return (*pilha_var).values[(*pilha_var).count - 1];
}

int size(pilha* pilha_var)
{
	return strlen((*pilha_var).values);
}

int count(pilha* pilha_var)
{
	return (*pilha_var).count;
}

int clear(pilha* pilha_var)
{
	(*pilha_var).values[0] = '\0';

	(*pilha_var).count = 0;

	return IsEmpty(pilha_var);
}
