#include <stdio.h>

int main() {
	int e, i;
	double r = 3.0, valor = 0.1666666667;
	scanf("%d", &e);
	for(i = e-1; i > 0; i--)
		valor = 1/(6.0+valor);
	r += valor;
	printf("%.10lF\n", (e) ? r : r-valor);
	return 0;
}
