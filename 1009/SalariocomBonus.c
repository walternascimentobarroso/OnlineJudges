#include <stdio.h>

int main() {
	char nome[50];
	double salario, montante, total;
	
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);
	
	total = salario+(montante*0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
	return 0;
}

