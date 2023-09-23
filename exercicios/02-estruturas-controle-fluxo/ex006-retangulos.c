#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 06\n------------------\n"

/*
	6) Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um
	retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0,
	calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op",
	calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1
	para "op", mostrar a mensagem "Opção inválida.".

*/

int main() {

	float base, altura, perimetro, area;
	int opcao;
	printf(TITULO);
	
	// entrada;
	printf("Base: "); scanf("%f", &base); fflush(stdin);
	printf("Altura: "); scanf("%f", &altura); fflush(stdin);
	
	// menu;
	printf("\n------- Retangulos -------\n");
	printf("1. Perimetro do retangulo\n2. Area do retangulo\n0. Sair\n");
	printf("--------------------------\n");
	printf("> "); scanf("%i", &opcao); fflush(stdin);
	
	// processamento e saida;
	if(opcao == 1) {
		// perimetro 2(b+h);
		perimetro = 2 * (base+altura);
		printf("\nO perimetro do retangulo e %.2f\n\n", perimetro);
	} else if(opcao == 2) {
		// area (b.h);
		area = base * altura;
		printf("A area do retangulo e %.2f\n\n", area);
	} else if(opcao == 0) {
		printf("\n\n----------\nFechando...\n----------\n\n");
	} else {
		printf("\nErro! Opcao invalida.\n\n");
	}
	
	system("pause");
	return 0;
}
