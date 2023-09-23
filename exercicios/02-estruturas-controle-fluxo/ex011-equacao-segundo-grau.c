#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO 11\n------------------\n"

/*

	11) Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de
	uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule
	e mostre as raízes da respectiva equação de segundo grau.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	int a, b, c, delta;
	float x1, x2;
	
	// entrada;
	printf("Informe o coeficiente A: ");
	scanf("%d", &a);
	
	printf("Informe o coeficiente B: ");
	scanf("%d", &b);
	
	printf("Informe o coeficiente C: ");
	scanf("%d", &c);
	
	// processamento e saída;
	delta = b*b - 4*a*c;
	
	if (delta < 0) {
		printf("\nRaízes fora do domínio dos números reais.\n");
	} else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("\nRaíz x': %.3f\nRaíz x'': %.3f\n", x1, x2);
	}
	
	system("pause");
	return 0;
}
