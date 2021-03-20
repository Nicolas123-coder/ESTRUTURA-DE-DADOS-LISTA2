#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <clocale>
#include <iostream>
#include "Stack_1.h"

using namespace std;

//NICOLAS DE BARROS - TIA : 32070837
// ARQUIVO MAIN.CPP

int main()
{
	
	char digita_frase[100];
	int tamanho_frase, i;
	pilha frase_padrao, frase_invertida;

	printf("Digite a frase para verificacao se e palindromo (sem acentos e letras maiusculas ): ");
	cin.getline(digita_frase, TAMANHO);                            // LE A FRASE 
	printf("\n");

	tamanho_frase = strlen(digita_frase);  

	for (i = 0; i < tamanho_frase; i++)
	{
		if (digita_frase[i] != ' ')
		{
			push(&frase_padrao, digita_frase[i]);
		}

	}

	for (i = 0; i < frase_padrao.count; i++)
	{
		push(&frase_invertida, frase_padrao.values[frase_padrao.count - 1 - i]);
	}
		

	push(&frase_padrao, '\0');
	push(&frase_invertida, '\0');

	printf("(%s %s)\n", frase_padrao.values, frase_invertida.values);

	if (strcmp(frase_padrao.values, frase_invertida.values) == 0)
	{
		printf("A frase e um palindromo !!! \n");
	}

	else
	{
		printf("A frase NAO e uma palindromo !!!");
	}
}
