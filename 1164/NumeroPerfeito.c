#include <stdio.h>

int main() {
	int e, i, j, count=0;
	scanf("%d", &e);
	int vetor[e];
	for(i = 0; i < e; i++) {
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < e; i++) {
		for(j = 1; j < vetor[i]; j++) {
			if((vetor[i]%j) == 0) {
				count +=j;
			}
		}
		if(count == vetor[i]) {
			printf("%d eh perfeito\n", vetor[i]);
		} else {
			printf("%d nao eh perfeito\n", vetor[i]);
		}
		count = 0;
	}
	return 0;
}
