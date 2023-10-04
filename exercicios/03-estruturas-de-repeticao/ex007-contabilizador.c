#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 07\n------------------\n"

/*

	7) Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O
	algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o
	usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int negativo, positivo, numero, total, op;
	
	// entrada;
	total = 0;
	negativo = 0;
	positivo = 0;
	
	// processamento;
	do {
		printf("\n1. Numero: \n0. Sair\n\n:");
		scanf("%d", &numero);
		fflush(stdin);
		if(numero > 0) {
			positivo++;
		} else if(numero < 0) {
			negativo++;
		}
	} while(numero!=0);
	
	total = positivo + negativo;
	
	// saída;
	printf("\nPositivos: %d\nNegativos: %d\nTotal: %d\n\n", positivo, negativo, total);
	
	system("pause");
	return 0;
}
