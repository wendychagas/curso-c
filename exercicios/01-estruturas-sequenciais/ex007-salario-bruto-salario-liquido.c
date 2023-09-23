#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 7\n------------------\n"

/*

	7) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio-base
	de um funcion�rio, calcule e mostre o seu sal�rio a receber, sabendo-se que esse
	funcion�rio teve gratifica��o de R$ 600,00 e paga imposto de 10% sobre o sal�rio base.

*/

int main() {
	
	float salarioBruto, valorImposto, salarioLiquido;
	float gratificacao = 600;
	char nome[50];
	
	// entrada;
	printf(TITULO);
	
	printf("\nNome: ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("Salario Bruto R$");
	scanf("%f", &salarioBruto);
	fflush(stdin);
	
	// processamento;
	valorImposto = salarioBruto * 10/100;
	salarioBruto -= valorImposto;
	salarioLiquido = salarioBruto+gratificacao;
	
	// sa�da;
	system("cls");
	printf("\nNome:             %s\n", nome);
	//printf("Salario bruto:  R$%2.f\n", salarioBruto);
	printf("Imposto:         -R$%.2f\n", valorImposto);
	printf("Gratificacao:    +R$%.2f\n", gratificacao);
	printf("Salario liquido: =R$%.2f\n\n", salarioLiquido);
	system("pause");
	
	return 0;
	
}
