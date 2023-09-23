#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 01\n------------------\n"

/*

	1) Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1
	e 10 (inclusive).

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	// entrada;
	int cont;
	int soma = 0;
	
	// processamento;
	while(cont <= 10) {
		printf("%d ", cont);
		soma += cont;
		cont++;
	}
	printf("\nA soma é: %d\n", soma);
	
	// saída;
	
	system("pause");
	return 0;
}
