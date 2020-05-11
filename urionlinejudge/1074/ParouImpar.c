#include <stdio.h>

int main() {
	int t, i, j;
	scanf("%d\n", &t);
	
	int vetor[t];
	
	for(i = 0; i < t; i++) {
		scanf("%d", &vetor[i]);
	}
	
	for(j = 0; j < t; j++) {
		if(vetor[j] == 0){
			printf("NULL\n");
		} else if(vetor[j] < 0 && (vetor[j]%2) != 0) {
			printf("ODD NEGATIVE\n");
		} else if(vetor[j] < 0 && (vetor[j]%2) == 0) {
			printf("EVEN NEGATIVE\n");
		} else if(vetor[j] > 0 && (vetor[j]%2) != 0) {
			printf("ODD POSITIVE\n");
		} else if(vetor[j] > 0 && (vetor[j]%2) == 0) {
			printf("EVEN POSITIVE\n");
		} 
	}
	
	return 0;
}

