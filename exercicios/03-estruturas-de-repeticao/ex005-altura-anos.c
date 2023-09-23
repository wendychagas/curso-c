#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 05\n------------------\n"

/*

	5) Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em m�dia 2,1 cent�metros
	ao ano. Seu irm�o, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em m�dia 1,1
	cent�metro por ano. Elabore um programa que conte quantos anos ser�o necess�rios
	para que a altura de Charlinho ultrapasse a de Bossa.


*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	float charlinho, bossa;
	int anos;
	
	// entrada;
	anos = 0;
	charlinho = 140;
	bossa = 145;
	
	// processamento;
	while(charlinho <= bossa) {
		anos++;
		charlinho += 2.1;
		bossa += 1.1;
	} 
	
	// sa�da;
	printf("\nSer�o necess�rios %d anos.\n", anos);
	
	system("pause");
	return 0;
}
