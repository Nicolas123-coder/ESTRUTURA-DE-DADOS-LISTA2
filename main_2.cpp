#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <clocale>
#include <iostream>
#include "Stack.h"

using namespace std;

//NICOLAS DE BARROS - TIA : 32070837
// ARQUIVO MAIN.CPP

int main()
{

	char DATA[10];
	int tamanho_data, i;
	pilha data_padrao, data_invertida;

	printf("Digite a data no formato DD/MM/YYYY para verificacao se e palindromo : ");
	cin.getline(DATA, TAMANHO);                            // LE A FRASE 
	printf("\n");

	tamanho_data = strlen(DATA);

	for (i = 0; i < tamanho_data; i++)
	{
		if (DATA[i] != '/')
		{
			push(&data_padrao, DATA[i]);
		}
	}

	for (i = 0; i < data_padrao.count; i++)
	{
		push(&data_invertida, data_padrao.values[data_padrao.count - 1 - i]);
	}


	push(&data_padrao, '\0');
	push(&data_invertida, '\0');

	printf("(%s %s)\n", data_padrao.values, data_invertida.values);

	if (strcmp(data_padrao.values, data_invertida.values) == 0)
	{
		printf("A data e um palindromo !!! \n");
	}

	else
	{
		printf("A data NAO e uma palindromo !!!");
	}
}
