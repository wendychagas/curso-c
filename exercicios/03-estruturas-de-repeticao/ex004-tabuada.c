#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 04\n------------------\n"

/*
	4) Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int valor;
	
	// entrada;
	printf("Tabuada do número: ");
	scanf("%d", &valor);
	
	// processamento e saída;
	printf("\n");
	for(int i = 0; i <= valor; i++) {
		printf("%d x %d = %d\n", valor, i, valor*i);
	}
	
	system("pause");
	return 0;
}
