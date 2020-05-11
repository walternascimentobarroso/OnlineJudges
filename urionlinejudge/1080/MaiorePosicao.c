#include <stdio.h>

#define MAX 100

int main() {
	int vetor[MAX], i, j, maior=0, position=0;
	
	for(i = 0; i < MAX; i++) {
		scanf(" %d", &vetor[i]);
	}
	
	for(j = 0; j < MAX; j++) {
		if(vetor[j] > maior) {
			maior = vetor[j];
			position = j;
		}
	}
	printf("%d\n%d\n", maior, position+1);
	return 0;
}

