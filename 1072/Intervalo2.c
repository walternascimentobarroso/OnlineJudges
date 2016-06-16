#include <stdio.h>

int main() {
	int t, i, j, countIN=0, countOUT=0;
	scanf("%d\n", &t);
	
	int vetor[t];
	
	for(i = 0; i < t; i++) {
		scanf("%d", &vetor[i]);
	}
	for(j = 0; j < t; j++) {
		if(vetor[j] >= 10 && vetor[j] <= 20){
			countIN++;
		} else {
			countOUT++;
		}
	}
	
	printf("%d in\n", countIN);
	printf("%d out\n", countOUT);
	
	return 0;
}

