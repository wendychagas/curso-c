#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 11\n------------------\n"

/*
	11) Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos.
	Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em
	segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo
	cronometrado.
*/

int main() {
	
	int segs, hr, min;
	printf(TITULO);
	
	// entrada;
	printf("\nTempo em segundos: ");
	scanf("%i", &segs);
	fflush(stdin);
	
	// processamento;
	hr = segs/3600;
	segs = segs%3600;
	min = segs/60;
	segs = segs%60;
	
	// saída;
	system("cls");
	printf(TITULO);
	printf("\nFORMATO HORA: %02d:%02d:%02d\n\n", hr, min, segs);
	system("pause");
	
	return 0;
}
