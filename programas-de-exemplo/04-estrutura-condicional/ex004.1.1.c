#include <stdio.h>

int main() {
	
	float media;
	
	printf("Insira a nota: ");
	scanf("%f", &media);
	
	if(media >= 4.0 && media < 7) {
		printf("Recuperacao.\n");
	}
	
	system("pause");
	return 0;
}
