#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "");
	
	float raio, area, raioQ;
	
	printf("Informe o raio: ");
	scanf("%f", &raio);
	area = PI* pow(raio, 2);
	
	printf("Área do círculo: %.2f\n", area);
	
	return 0;
}
