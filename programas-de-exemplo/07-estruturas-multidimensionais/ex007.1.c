#include <stdio.h>

int main(void) {
	
	int matriz[3][3];
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	
	matriz[1][0] = 4;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	
	matriz[2][0] = 7;
	matriz[2][1] = 8;
	matriz[2][2] = 9;
	
	// imprimir linha a linha;
	printf("%d - %d - %d\n", matriz[0][0], matriz[0][1], matriz[0][2]); // 1 - 2 - 3;
	printf("%d - %d - %d\n", matriz[1][0], matriz[1][1], matriz[1][2]); // 4 - 4 - 6;
	printf("%d - %d - %d\n", matriz[2][0], matriz[2][1], matriz[2][2]); // 7 - 8 - 9;
		
	return 0;
}
