#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 10\n------------------\n"
#define PI 3.1415

/*
	10) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que calcule e mostre a
	área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14

*/

int main() {
	
	float raio, area;
	printf(TITULO);
	
	// entrada;
	printf("\nRaio: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	// processamento;
	area = PI*raio*raio;
	
	// saída;
	system("cls");
	printf(TITULO);
	printf("\nArea do circulo: %.2f\n\n", area);
	system("pause");
	return 0;
}
