#include <stdio.h>

int main(void) {
	
	int v[5];
	
	for(int i=0; i<5; i++) {
		printf("posicao [%i] | valor: ", i);
		scanf("%i", &v[i]);
	}
	
	printf("\nDados inseridos:\n");
	for(int i=0; i<5; i++) {
		printf("%d ", v[i]);
	}
	
	return 0;
}
