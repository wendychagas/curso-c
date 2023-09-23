#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 10\n------------------\n"
#define PI 3.1415

/*
	10) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que calcule e mostre a
	�rea de um c�rculo. Sabe-se que: �rea = Pi * R�, aonde Pi = 3,14

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
	
	// sa�da;
	system("cls");
	printf(TITULO);
	printf("\nArea do circulo: %.2f\n\n", area);
	system("pause");
	return 0;
}
