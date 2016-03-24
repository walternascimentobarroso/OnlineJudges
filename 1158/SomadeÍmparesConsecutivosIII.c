#include <stdio.h>

int main() {
	int i, total=0, n, j;
	scanf("%d", &n);
	int vetor[n][2];
	
	for(j = 0; j < n; j++) {
		scanf("%d %d", &vetor[j][0], &vetor[j][1]);
	}
	
	for(j = 0; j < n; j++) {
		i = vetor[j][1];
		while(i != 0) {
			if((vetor[j][0]%2) != 0) {
				total += vetor[j][0];
				i--;
			}
			vetor[j][0]++;
		}
		printf("%d\n", total);
		total = 0;
	}
	
	return 0;
}
