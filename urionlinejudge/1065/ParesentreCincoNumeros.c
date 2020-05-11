#include <stdio.h>

int main() {
	int vetor[5], j, count=0;
	scanf("%d\n%d\n%d\n%d\n%d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4]);
	
	for(j = 0; j < 5; j++) {
		if((vetor[j]%2) == 0){
			count++;
		}
	}
	
	printf("%d valores pares\n", count);
	return 0;
}

