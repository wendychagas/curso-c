#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(int argc, char *argv[]) {
	
	// ----------------------------------------------------------------------------
	
	// Exercicio 11 - Formatar segundos em hora:minuto:segundo;
	Horario horario;
	
	int segundos;
	Horario resultado;
	
	printf(TXT);
	printf("Informe os segundos: ");
	scanf("%i", &segundos);
	
	resultado = formatoHora(segundos);
	
	printf("\nFORMATO HORA: %02d:%02d:%02d\n\n", resultado.hr, resultado.min, resultado.seg);
	system("pause");
	system("cls");
	
	// ----------------------------------------------------------------------------
	
	// Exercicio 4 - Calcular salario aumentado;
	Funcionario funcionario;
	
	float salario, salarioComAumento, taxaAumento;
	float aumento = 0;
	
	printf(TXT);
	printf("\nInforme o salario\nR$");
	scanf("%f", &funcionario.salario);
	printf("Informe o %% de aumento: ");
	scanf("%f", &taxaAumento);
	
	funcionario.aumento = calcularAumento(funcionario.salario, taxaAumento);
	funcionario.salarioComAumento = funcionario.salario+funcionario.aumento;
	
	exibirInfo(funcionario);
	system("pause");
	system("cls");
	
	// ----------------------------------------------------------------------------
	
	// Exercicio 2 - Media ponderada de 3 notas;
	
	// ----------------------------------------------------------------------------
	
	// Exercicio 1 - Soma 4 valores;
	float v1, v2, v3, v4, resposta;
	
	printf(TXT);
	printf("Informe 4 valores:\n");
	scanf("%f", &v1);
	scanf("%f", &v2);
	scanf("%f", &v3);
	scanf("%f", &v4);
	
	resposta = calcSoma(v1, v2, v3, v4);
	printf("\n---------------\nA soma foi %.2f\n", resposta);
	system("pause");
	system("cls");
	
	// ----------------------------------------------------------------------------
	
	printf(TXT2);
	system("pause");
	return 0;
	
}

