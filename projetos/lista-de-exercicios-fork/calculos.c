#include <stdio.h>
#include "calculos.h"

float calcSoma(float v1, float v2, float v3, float v4) {
	return v1+v2+v3+v4;
}

float calcularAumento(float salario, float taxaAumento) {
	
	return salario * taxaAumento / 100;
}

void exibirInfo(Funcionario funcionario) {	
	//Funcionario funcionario;
	
	printf("\nSalario inicial:     R$%.2f\n", funcionario.salario);
	printf("Aumento de:          R$%.2f\n", funcionario.aumento);
	printf("Salario final        R$%.2f\n\n", funcionario.salarioComAumento);
}

Horario formatoHora(int seg) {
	Horario horario;
	
	horario.hr = seg / 3600;
	seg = seg % 3600;
	horario.min = seg / 60;
	horario.seg = seg % 60;
	
	return horario;
	
}
