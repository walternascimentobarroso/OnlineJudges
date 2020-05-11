#include <stdio.h>

int main() {
	int e, i, j;
	scanf("%d", &e);
	long long int vetor[e], fibo, ant, atual;

	for(i = 0; i < e; i++) {
		scanf("%lld", &vetor[i]);
	}

	for(i = 0; i < e; i++) {
		ant = 0;
		atual = 0;
		fibo = 1;
		for(j = 0; j < vetor[i]; j++) {
			atual = fibo + ant;
			fibo = ant;
			ant = atual;
		}
		printf("Fib(%lld) = %lld\n", vetor[i], atual);
	}
	return 0;
}
