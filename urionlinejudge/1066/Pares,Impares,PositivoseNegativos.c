#include <stdio.h>

int main() {
	int vetor[5], j, countP=0, countI=0, countPO=0, countNE=0;
	scanf("%d\n%d\n%d\n%d\n%d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4]);
	
	for(j = 0; j < 5; j++) {
		if((vetor[j]%2) == 0){
			countP++;
		} else {
			countI++;
		}
		if(vetor[j] > 0){
			countPO++;
		} else if (vetor[j] < 0) {
			countNE++;
		}
	}
	
	printf("%d valor(es) par(es)\n", countP);
	printf("%d valor(es) impar(es)\n", countI);
	printf("%d valor(es) positivo(s)\n", countPO);
	printf("%d valor(es) negativo(s)\n", countNE);

	return 0;
}

