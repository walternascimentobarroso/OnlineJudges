#include <stdio.h>

void caixa(int *valor, int *total, int mult, int div, int m);

int main() {
	double parametro;
	int moeda, total, valor, m = 0;
	scanf("%lf", &parametro);
	valor = (int)parametro;
	moeda = (parametro-valor)*100;	
	printf("NOTAS:\n");
	total = (int)valor/100;
	printf("%d nota(s) de R$ 100.00\n", total);
	caixa(&valor, &total, 100, 50, m);
	caixa(&valor, &total, 50, 20, m);
	caixa(&valor, &total, 20, 10, m);
	caixa(&valor, &total, 10, 5, m);
	caixa(&valor, &total, 5, 2, m);
	m = 1;
	printf("MOEDAS:\n");
	caixa(&valor, &total, 2, 1, m);
	total = (int)moeda/100;
	caixa(&moeda, &total, 100, 50, m);
	caixa(&moeda, &total, 50, 25, m);
	caixa(&moeda, &total, 25, 10, m);
	caixa(&moeda, &total, 10, 05, m);
	caixa(&moeda, &total, 5, 01, m);
	return 0;
}

void caixa(int *valor, int *total, int mult, int div, int m) {
	(*valor) = (*valor)-((*total)*mult);
	(*total) = (int)(*valor)/div;	
	if(m == 0) {
		printf("%d nota(s) de R$ %d.00\n", (*total), div);
	}else {
		if(mult == 2) {
			printf("%d moeda(s) de R$ %d.00\n", (*total), div);
		}else if(div < 10){
			printf("%d moeda(s) de R$ 0.0%d\n", (*total), div);
		}else{
			printf("%d moeda(s) de R$ 0.%d\n", (*total), div);
		}
	}
}

