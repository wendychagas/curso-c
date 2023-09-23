#include <stdio.h>

#define TITULO "\n------------------\n   EXERCICIO 3\n------------------\n"

/*
	3) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas e
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.


*/

int main() {
	
	float n1, n2, n3, p1, p2, p3, m;
	
	printf(TITULO);
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	printf("Insira o peso da primeira nota: ");
	scanf("%f", &p1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
	printf("Insira o peso da segunda nota: ");
	scanf("%f", &p2);
	
	printf("Insira a terceira nota: ");
	scanf("%f", &n3);
	printf("Insira o peso da terceira nota: ");
	scanf("%f", &p3);
	
	m = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	
	printf("Media ponderada: %.2f\n", m);
	
	
	system("pause");
	return 0;
}
