#include <stdio.h>

#define PI 3.14159

int main() {
	float A, B, C;
	double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	
	scanf("%f %f %f", &A, &B, &C);
	
	TRIANGULO 	= (A*C)/2;
	CIRCULO 	= (C * C) * PI;
	TRAPEZIO	= ((A+B)*C)/2;
	QUADRADO	= B*B;
	RETANGULO	= A*B;
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
	
	return 0;
}

