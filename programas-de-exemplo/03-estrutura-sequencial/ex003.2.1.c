#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma, subtracao, divisao, multiplicacao;
	
	printf("Primeiro valor: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Segundo valor: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	soma = n1+n2;
	subtracao = n1-n2;
	multiplicacao = n1*n2;
	divisao = n1/n2;
	
	printf("\n----- Resultado -----\n");
	printf("R: SOMA = %i\nR: SUBTRAÇÃO = %i\n", soma, subtracao);
	printf("R: MULTIPLICAÇÃO = %i\nR: DIVISÃO = %i\n", multiplicacao, divisao);
	
	return 0;
}
