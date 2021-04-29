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
	printf("Insira a base do retangulo.......:");
	scanf("%f",&base);
	printf("Insira a altura do retangulo.....:");
	scanf("%f",&altura);
	printf("A area do retangulo eh: %f ",base*altura);	
}

int calcular_retangulo_perimetro(){
	float base,altura;
	printf("Insira a base do retangulo.......:");
	scanf("%f",&base);
	printf("Insira a altura do retangulo.....:");
	scanf("%f",&altura);
	printf("A area do retangulo eh: %f ",2*(base+altura));
}
