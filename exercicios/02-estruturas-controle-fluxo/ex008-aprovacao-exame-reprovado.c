#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BIM 3
#define NOTACORTE 6
#define TITULO "\n------------------\n   EXERCICIO 08\n------------------\n"

/*
	8) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba tr�s notas de
	um aluno, calcule e mostre a m�dia aritm�tica e a mensagem que segue a tabela abaixo.
	Para alunos de exame, calcule e mostre a nota que dever� ser tirada no exame para
	aprova��o, considerando que a m�dia no exame � 6,0.
	
	M�dia aritim�tica {0,0 ~ 3,0} : {Reprovaado} Mensagem
	M�dia aritim�tica {3,0 ~ 7,0} : {Exame} Mensagem
	M�dia aritim�tica {7,0 ~ 10,0} : {Aprovado} Mensagem

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
	
	// processamento e sa�da;
	media = (n1+n2+n3) / BIM;
	
	// sa�da;
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
