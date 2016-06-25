#include <stdio.h>

int main() {
	int t, i, j;
	scanf("%d\n", &t);
	
	float vetor[t][3], total = 0;
	
	for(i = 0; i < t; i++) {
		scanf("%f %f %f", &vetor[i][0], &vetor[i][1], &vetor[i][2]);
	}
	for(j = 0; j < t; j++) {
		vetor[j][0] *= 2;
		vetor[j][1] *= 3;
		vetor[j][2] *= 5;
		
		total = (vetor[j][0]+vetor[j][1]+vetor[j][2])/10;
		
		printf("%.1f\n", total);
	}

	return 0;
}

