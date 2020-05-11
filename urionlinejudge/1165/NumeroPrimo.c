#include <stdio.h>

int main() {
	int e, i, j;
	scanf("%d", &e);
	int vetor[e];
	for(i = 0; i < e; i++) {
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < e; i++) {
		if(((vetor[i]%1) == 0) && ((vetor[i]%vetor[i]) == 0)) {
			printf("%d eh primo\n", vetor[i]);
		} else {	
			printf("%d nao eh primo\n", vetor[i]);
		}
	}
	return 0;
}
