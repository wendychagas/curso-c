#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 6\n------------------\n"

/*

	6) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio-base	
	de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio
	tem gratifica��o de 5% sobre o sal�rio-base e paga imposto de 7% sobre o sal�rio-base.

*/

int main() {
	
	char nome[50];
	float salarioBase, gratificacao, imposto, salarioLiquido;
	
	// entrada;
	printf(TITULO);
	printf("\nNome: ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("Salario Bruto R$");
	scanf("%f", &salarioBase);
	fflush(stdin);
	
	// processamento;
	gratificacao = salarioBase * 5/100;
	imposto = salarioBase * 7/100;
	salarioLiquido = salarioBase+gratificacao-imposto;
	
	// sa�da;
	printf("\nNome:           %s\n", nome);
	printf("Salario Bruto   R$%.2f\n", salarioBase);
	printf("Imposto         R$%.2f\n", imposto);
	printf("Graticacao      R$%.2f\n", gratificacao);
	printf("Salario Liquido R$%.2f\n\n", salarioLiquido);
	
	system("pause");
	return 0;
}

