#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 9\n------------------\n"

/*
	9) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que calcule e mostre a
	area de um triângulo. Sabe-se que: Área = (base * altura)/2.

*/

int main() {
	
	float base, altura, area;
	printf(TITULO);
	
	// entrada;
	printf("\nBase: ");
	scanf("%f", &base);
	fflush(stdin);
	
	printf("Altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	// processamento;
	area = (base*altura)/2;
	
	// saída;
	system("cls");
	printf(TITULO);
	printf("\nBase:    %.2f\n", base);
	printf("Altura:  %.2f\n", altura);
	printf("Area:    %.2f\n\n", area);
	system("pause");
	
	return 0;
}
