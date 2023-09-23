#define TXT "\n---------------------\n Projeto Exercicios\n---------------------\n"

float calcSoma(float v1, float v2, float v3, float v4);

typedef struct {
	float salario;
	float aumento;
	float salarioComAumento;
	
}Funcionario;

float calcularAumento(float salario, float taxaAumento);
void exibirInfo(Funcionario funcionario);

typedef struct {
		int hr;
		int min;
		int seg;
	} Horario;
	
Horario formatoHora(int seg);
