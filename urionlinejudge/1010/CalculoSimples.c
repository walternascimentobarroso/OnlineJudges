#include <stdio.h>

int main() {
	int codigopeca1, numeropeca1, codigopeca2, numeropeca2;
	double valorunitpeca1, valorunitpeca2, valorTotal;
	
	scanf ("%d %d %lf", &codigopeca1, &numeropeca1, &valorunitpeca1);
	scanf ("%d %d %lf", &codigopeca2, &numeropeca2, &valorunitpeca2);
	
	valorTotal = (numeropeca1 * valorunitpeca1) + (numeropeca2 * valorunitpeca2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
	return 0;
}

