#include <stdio.h>

int main() {
	int a, i, fatorial;
	scanf("%d", &a);
	fatorial = a;
	for(i = 1; i < a; i++) {
		fatorial = fatorial * (a - i);
	}
	printf("%d\n", fatorial);
	return 0;
}
