#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 15\n------------------\n"

/*
	15) (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que:
	
		1 pé = 12 polegadas;
		1 jarda = 3 pés;
		1 milha = 1760 jardas;
		
	Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre
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
	 
	// saída;
	printf("\nPolegadas: %.2f\n", pol);
	printf("Jardas: %.2f\n", jar);
	printf("Milhas: %.2f\n\n", mil);
	
	system("pause");
	return 0;
} 
