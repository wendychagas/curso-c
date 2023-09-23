#include <stdio.h>

#define TXT "Entrada e Saída de Dados\n"

int main() {
	printf("%s\n", TXT);
	
	int idade = 0;
	float altura = 0.00;
	char nome[50] = "";
	
	printf("Idade: ");
	scanf("%i", &idade);
	fflush(stdin);
	
	printf("Altura: ");
	scanf("%f", &altura);
	fflush(stdin);

	printf("Nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("\nNome: %s\nIdade: %i\nAltura: %.2f\n", nome, idade, altura);	
	
}
