#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 15\n------------------\n"


/*
	(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba a hora de
	início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras:
	hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o
	tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
	terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min
	até as 23hr29min.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	int horainicio, minutoinicio, horafim, minutofim, hora, minuto;
	printf(TITULO);
	
	// entrada;
	printf("\nPreencha os dados de inicio:\n");
	printf("Horas: ");
	scanf("%d", &horainicio);
	printf("Minutos: ");
	scanf("%d", &minutoinicio);
	
	printf("\nPreencha os dados de fim:\n");
	printf("Horas: ");
	scanf("%d", &horafim);
	printf("Minutos: ");
	scanf("%d", &minutofim);
	
	// processamento;
	if(minutoinicio > minutofim) {
		minutofim = minutofim+60;
		horafim = horafim -1;
	}
	minuto = minutofim - minutoinicio;
	hora = horafim - horainicio;

	// saída;
	printf("\nDuração: %dhr e %dmin.\n", hora, minuto);
	
	system("pause");
	return 0;
}
