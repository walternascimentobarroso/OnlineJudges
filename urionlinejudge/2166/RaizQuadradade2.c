#include <stdio.h>

int main() {
	int e, i;
	double r = 1.0, valor = 0.5;
	scanf("%d", &e);
	for(i = e-1; i > 0; i--)
		valor = 1/(2.0+valor);
	r += valor;
	printf("%.10lF\n", (e) ? r : r-valor);
	return 0;
}
