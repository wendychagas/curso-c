#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 15\n------------------\n"

/*
	15) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de
	um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de
	bonificação e de auxílio-escola.

		Salário 							Bonificação
		Até R$ 500,00 						5% do salário
		Entre R$ 500,01 e R$ 1.200,00 		12% do salário
		Acima de R$ 1.200,00 				Sem bonificação
		
		Salário 							Auxílio-escola
		Até R$ 600,00 						R$ 150,00
		Mais que R$ 600,00 					R$ 600,00
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf(TITULO);
    float salario, novosalario, bonificacao = 0, auxilio = 0; // Inicialize bonificacao e auxilio com 0.

    // entrada;
    printf("Informe o salário: ");
    scanf("%f", &salario);

    // processamento;  
    if (salario <= 500) {
        bonificacao = salario * 0.05;
    } else if (salario > 500 && salario <= 1200) {
        bonificacao = salario * 0.12;
    }

    if (salario <= 600) {
        auxilio = 150;
    } else {
        auxilio = 600;
    }
    
    /*
	if(salario <= 500){
 		bonificacao = salario * 0.05;
 	}
 	if(salario > 500){
 		bonificacao = salario * 0.12;
 	}
 	if(salario > 1200){
 		bonificacao = 0;
 	}
 	if(salario <= 600){
 		auxilio = 150;
 	}
 	if(salario > 600){
 		auxilio = 600;
	}
    */
    
    novosalario = salario + bonificacao + auxilio;

    // saída;
    printf("\nSalário total: %.2f\n", novosalario);

    return 0;
}

