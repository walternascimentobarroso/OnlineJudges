#include <stdio.h>

int main() {
	int e, i;
	float div;
	scanf("%d", &e);
	int vetor[e][2];
	
	for(i = 0; i < e; i++) {
		scanf("%d %d", &vetor[i][0], &vetor[i][1]);
	}
	
	for(i = 0; i < e; i++) {
		if(vetor[i][1] != 0){
			div = (float)vetor[i][0]/(float)vetor[i][1];
			printf("%.1f\n", div);
		} else {
			printf("divisao impossivel\n");
		}
	}

	return 0;
}
