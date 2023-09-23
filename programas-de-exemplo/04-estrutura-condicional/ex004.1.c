#include <stdio.h>

int main() {
	
	float media;
	
	printf("Insira a nota: ");
	scanf("%f", &media);
	
	if(media >= 7.0) {
		printf("Aprovado.\n");
	}
	
	system("pause");
	return 0;
}
