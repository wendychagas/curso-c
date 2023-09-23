#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 4\n------------------\n"

/*

	4) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de
	um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um
	aumento de 25%.


*/

int main() {
	
	char nome[50];
	float salarioInicial, valorDoAumento, salarioFinal;
	
	// entrada;
	printf(TITULO);
	printf("\nFuncionario(a): ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("Salario atual R$");
	scanf("%f", &salarioInicial);
	fflush(stdin);
	
	// processamento;
	valorDoAumento = salarioInicial * 25/100;
	salarioFinal = salarioInicial+valorDoAumento;
	
	// sa�da;
	printf("\nNome:               %s\n", nome);
	printf("Salario anterior :  R$%.2f\n", salarioInicial);
	printf("Valor do aumento:   R$%.2f\n", valorDoAumento);
	printf("Salario atualizado: R$%.2f\n\n", salarioFinal);
	
	system("pause");
			
	return 0;
}
