#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 5\n------------------\n"

/*

	5) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de
	um funcion�rio e o percentual de aumento, calcule e mostre o valor do aumento e o
	novo sal�rio.


*/

int main() {
	
	char nome[50];
	float salarioInicial, valorDoAumento, salarioFinal, taxaAumento;
	
	// entrada;
	printf(TITULO);
	printf("\nFuncionario(a): ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("%% de aumento: ");
	scanf("%f", &taxaAumento);
	fflush(stdin);
	
	printf("Salario atual R$");
	scanf("%f", &salarioInicial);
	fflush(stdin);
	
	// processamento;
	valorDoAumento = salarioInicial * taxaAumento/100;
	salarioFinal = salarioInicial+valorDoAumento;
	
	// sa�da;
	printf("\nNome:               %s\n", nome);
	printf("Salario anterior :  R$%.2f\n", salarioInicial);
	printf("Valor do aumento:   R$%.2f\n", valorDoAumento);
	printf("Salario atualizado: R$%.2f\n\n", salarioFinal);
	
	system("pause");
			
	return 0;
}
