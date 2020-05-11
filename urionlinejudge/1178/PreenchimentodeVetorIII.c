#include <stdio.h>
#define SIZE 100

int main() {
	int i;
	double e, N[SIZE];
	scanf("%lf", &e);
	for(i = 0; i < SIZE; i++) {
		N[i] = e;
		printf("N[%d] = %.4lf\n", i, N[i]);
		e = e/2;
	}
	return 0;
}
