#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 15\n------------------\n"

/*
	15) (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que:
	
		1 p� = 12 polegadas;
		1 jarda = 3 p�s;
		1 milha = 1760 jardas;
		
	Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre
	os resultados.
	
		a) polegadas;
		b) jardas;
		c) milhas.
*/

int main() {
	
	float pes, jar, mil, pol;
	printf(TITULO);
	
	// entrada;
	printf("\nInsira a medida em pes: ");
	scanf("%f", &pes);
	 
	// processamento;
	pol = pes*12.0;
	jar = pes/3.0;
	mil = jar/1760.0;
	 
	// sa�da;
	printf("\nPolegadas: %.2f\n", pol);
	printf("Jardas: %.2f\n", jar);
	printf("Milhas: %.2f\n\n", mil);
	
	system("pause");
	return 0;
} 
