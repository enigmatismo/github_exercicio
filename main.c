#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int calcular_retangulo_area();
int calcular_retangulo_perimetro();
int main(int argc, char *argv[]) {
	calcular_retangulo_perimetro();
	return 0;
}

int calcular_retangulo_area(){
	float base,altura;
	printf("Insira a base do retangulo.......: ");
	scanf("%f",&base);
	printf("Insira a altura do retangulo.....: ");
	scanf("%f",&altura);
	printf("A area do retangulo eh: %f ",base*altura);	
}

int calcular_retangulo_perimetro(){
	float base,altura;
	printf("Insira a base do retangulo.......: ");
	scanf("%f",&base);
	printf("Insira a altura do retangulo.....: ");
	scanf("%f",&altura);
	printf("O perimetro do retangulo eh: %f ",2*(base+altura));
}

int calcular_circulo_area(){
	float r, pi;
	int opc;
	pi = 3,14;
	printf("PI foi pré determinado como >> 3,14 <<");
	printf("Para alterar PI, digite 9; Caso contrário, apenas siga.");
		switch (opc){
			case 9:
				printf("Qual o valor desejado para PI?");
				scanf("%f", &pi);
			break;
		}
	printf("Insira a razao do circulo.......: ");
	scanf("%f",&r);
	printf("A area do circulo eh: %f ", pi * (r*r);
}

int calcular_circulo_perimetro(){
	float r, pi;
	int opc;
	pi = 3,14;
	printf("PI foi pré determinado como >> 3,14 <<");
	printf("Para alterar PI, digite 9; Caso contrário, apenas siga.");
		switch (opc){
			case 9:
				printf("Qual o valor desejado para PI?");
				scanf("%f", &pi);
			break;
		}
	printf("Insira a razao do circulo.......: ");
	scanf("%f",&r);
	printf("O perimetro do circulo eh: %f ", (pi * (r*r)) * (2 * (pi *r));
}
	
