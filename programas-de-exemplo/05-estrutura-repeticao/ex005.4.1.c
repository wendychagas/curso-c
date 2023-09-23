#include <stdio.h>

int main() {
	
	int i = 0;
	
	do{
		printf("%i\n", i++);
		
		if(i == 6) {
			break;
		}
	} while (i <= 10);
	
	
	return 0;
}
