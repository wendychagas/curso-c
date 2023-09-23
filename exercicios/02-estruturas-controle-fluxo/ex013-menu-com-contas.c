#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO 13\n------------------\n"

/*
	13) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que mostre o menu de
	opções a seguir, receba a opção do usuário e dos dados necessários para executar cada
	operação. Suponha que o usuário não irá inserir valores inválidos.
	
	---------- Menu de opções ----------
	1. Somar dois números
	2. Raiz quadrada de um número
	0. Sair
	------------------------------------
	> Digite a opção desejada: 

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int op;
	float v1, v2, r;
	
	// entrada;
	printf("\n---------- Opções ----------\n");
	printf("1. Somar dois números\n");
	printf("2. Raiz quadrada de um número\n");
	printf("0. Sair\n");
	printf("----------------------------\n");
	printf("> Digite a opção desejada: ");
	scanf("%d", &op);
	
	// processamento e saída;
	switch(op) {
	case 0:
		printf("\nFim do Programa\n");
		break;
	case 1:
		printf("\nValor 1: ");
		scanf("%f", &v1);
		
		printf("Valor 2: ");
		scanf("%f", &v2);
		r = v1+v2;
		printf("Resultado: %.2f + %.2f = %.2f\n", v1, v2, r);
		break;
	case 2:
		printf("\nValor: ");
		scanf("%f", &v1);
		r = sqrt(v1);
		printf("Resultado: Raíz Quadrada de %.2f = %.2f\n", v1, r);
		break;
	default:
		printf("\nOpção inválida.\n");
	}
	
	system("pause");
	return 0;
}
