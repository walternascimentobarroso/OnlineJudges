#include <stdio.h>

int main() {
	int vetor[999][2], a = 0, i,j, total=0, temp;
	
	for(i = 0; a == 0; i++) {
		scanf("%d %d", &vetor[i][0], &vetor[i][1]);
		if(vetor[i][0] <= 0 || vetor[i][1] <= 0){
			a = i;
		}
	}
	
	for(i = 0; i < a; i++) {	
		if(vetor[i][0] < vetor[i][1]){
			temp = vetor[i][0];
			vetor[i][0] = vetor[i][1];
			vetor[i][1] = temp;
		}
		for(j = vetor[i][1]; j <= vetor[i][0]; j++) {
			printf("%d ", j);
			total += j;
		}
		printf("Sum=%d\n", total);
		total=0;
	}
	
	return 0;
}
