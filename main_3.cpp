#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <clocale>
#include <iostream>
#include "Stack_3.h"

using namespace std;

//NICOLAS DE BARROS - TIA : 32070837
// ARQUIVO MAIN.CPP


int findBracket(char bracket, char brackets[])
{
	int idx, i;

	for (i = 0; i < TAMANHO; i++)
		if (bracket == brackets[i])
			idx = i;

	return idx;
}

int main()
{

	char simbolos_entrada[TAMANHO];
	int tamanho_frase, i, erro_tag;
	pilha input_padrao;

	printf("Digite a frase : ");
	//cin.getline(frase_digitada, TAMANHO);                           
	cin >> simbolos_entrada;
	printf("\n");

	tamanho_frase = strlen(simbolos_entrada);

	for (i = 0; i < tamanho_frase; i++)
	{
		if ((simbolos_entrada[i] == '{') || (simbolos_entrada[i] == '[') || (simbolos_entrada[i] == '<') || (simbolos_entrada[i] == '(') || (simbolos_entrada[i] == '}') || (simbolos_entrada[i] == ']') || (simbolos_entrada[i] == '>') || (simbolos_entrada[i] == ')'))
		{
			push(&input_padrao, simbolos_entrada[i]);
			printf("( %c )\n", input_padrao.values[i]);
		}
	}

	// TESTE P/ VER SE É PAR 
	
	if (input_padrao.count % 2 == 0)
	{
		erro_tag = 0;

		for (i = 0; i < input_padrao.count/2; i++)
		{
			switch (input_padrao.values[i])
			{
				case '{' :
					if (input_padrao.values[input_padrao.count - 1 - i] != '}')
					{
						erro_tag = 1;
					}
					break;

				case '[' :
					if (input_padrao.values[input_padrao.count - 1 - i] != ']')
					{
						erro_tag = 1;
					}
					break;

				case '<' :
					if (input_padrao.values[input_padrao.count - 1 - i] != '>')
					{
						erro_tag = 1;
					}
					break;

				case '(' :
					if (input_padrao.values[input_padrao.count - 1 - i] != ')')
					{
						erro_tag = 1;
					}
					break;

			}
		}
	}
	else 
	{
		erro_tag = 1;
	}

	if (erro_tag == 1)
	{
		printf("ERRO DE CORRESPONDENCIA : %s\n", simbolos_entrada);
	}
	else
	{
		printf("FRASE OK !!!");
	}
	
}
