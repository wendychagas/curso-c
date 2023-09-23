#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 03\n------------------\n"

/*

	3) Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
	que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.
	
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int valor, fat = 1;
	
	// entrada;
	printf("Digite o valor: ");
	scanf("%d", &valor);
	
	// processamento;
	for(int i = 1; i <= valor; i++) {
		fat *= i;
	}
	
	// saída;
	printf("\nFatorial de %d é %d\n", valor, fat);
	
	system("pause");
	return 0;
}
