#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");	
	int dia;
	
	printf("Digite um n�mero de 1 a 7: ");
	scanf("%i", &dia);
	
	switch(dia) {
		case 1:
			printf("\nDomingo.");
			break;
		case 2:
			printf("\nSegunda-feira.");
			break;
		case 3:
			printf("\nTer�a-feira.");
			break;
		case 4:
			printf("\nQuarta-feira.");
			break;
		case 5:
			printf("\nQuinta-feira.");
			break;
		case 6:
			printf("\nSexta-feira.");
			break;
		case 7:
			printf("\nS�bado.");
			break;
		default:
			printf("\nDia inv�lido.");
			break;
			
	}
	
	return 0;
}
