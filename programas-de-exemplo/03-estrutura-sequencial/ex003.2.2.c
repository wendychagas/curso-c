#include <stdio.h>
#include <locale.h>

int main() {
	
	int dado = 10;
	printf("Dado antes do teste de incrementos\nValor inicial: %d\n\n", dado);
	
	dado++;
	printf("Dado++: %d\n", dado);
	
	dado--;
	printf("Dado--: %d\n", dado);
	
	dado+=3;
	printf("Dado+=3: %d\n", dado);
	
	dado-=2;
	printf("Dado=-2: %d\n", dado);
	
	dado*=10;
	printf("Dado*=10: %d\n", dado);
	
	return 0;
}
