#include <stdio.h>

int main() {
	float vetor[6], media, total = 0;
	int j, count=0;
	scanf("%f\n%f\n%f\n%f\n%f\n%f", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5]);
	
	for(j = 0; j < 6; j++) {
		if(vetor[j] > 0){
			total += vetor[j];
			count++;
		}
	}
	media  = total/count;
	printf("%d valores positivos\n", count);
	printf("%.1f\n", media);
	return 0;
}

