#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 05\n------------------\n"

/*
	5) Desenvolva um algoritmo que simule uma calculadora. Voc� deve dar a op��o de o
	usu�rio escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usu�rio s�
	conseguir� processar dois n�meros inteiros por vez.	

*/

int main() {

	int opcao;
	float valor1, valor2, resultado;
	printf(TITULO);
	
	// menu;
	printf("\n----- Calculadora -----\n");
	printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n");
	printf("-----------------------\n");
	printf("> "); scanf("%i", &opcao);
	fflush(stdin);
	
	// entrada;
	printf("\nPrimeiro valor: ");
	scanf("%f", &valor1);
	fflush(stdin);
	
	printf("Segundo valor: ");
	scanf("%f", &valor2);
	fflush(stdin);
	
	// processamento;
	switch(opcao) {
		case 1:
			resultado = valor1 + valor2;
			break;
		case 2:
			resultado = valor1 - valor2;
			break;
		case 3:
			resultado = valor1 * valor2;
			break;
		case 4:
			resultado = valor1 / valor2;
			break;
		default:
			printf("\nOpcao invalida.\n\n");
			break;
	}
	
	// sa�da;
	printf("\nResultado = %.2f\n\n", resultado);
	
	system("pause");
	return 0;
}
