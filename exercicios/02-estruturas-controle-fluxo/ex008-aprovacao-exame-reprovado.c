#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BIM 3
#define NOTACORTE 6
#define TITULO "\n------------------\n   EXERCICIO 08\n------------------\n"

/*
	8) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas de
	um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo.
	Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para
	aprovação, considerando que a média no exame é 6,0.
	
	Média aritimética {0,0 ~ 3,0} : {Reprovaado} Mensagem
	Média aritimética {3,0 ~ 7,0} : {Exame} Mensagem
	Média aritimética {7,0 ~ 10,0} : {Aprovado} Mensagem

*/

int main() {

	float n1, n2, n3, media, notaExame;
	printf(TITULO);
	
	// entrada;
	printf("\nNota 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Nota 3: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	// processamento e saída;
	media = (n1+n2+n3) / BIM;
	
	// saída;
	printf("\nMedia: %.2f", media);
	if((media >= 7) && (media <= 10)) {
		printf("\nAprovado.\n\n");
	} else if((media >= 3) && (media < 7)) {
		printf("\nRecuperacao.\n");
		notaExame = NOTACORTE*2 - media;
		printf("\nE preciso tirar a nota %.2f no exame.\n\n", notaExame);
	} else {
		printf("\nReprovado.\n\n");
	}
	
	system("pause");
	return 0;
}
