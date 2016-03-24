#include <stdio.h>

int main() {
	int vetor[999][2], a = 0, i;
	
	for(i = 0; a == 0; i++) {
		scanf("%d %d", &vetor[i][0], &vetor[i][1]);
		if(vetor[i][0] == 0 || vetor[i][1] == 0){
			a = i;
		}
	}
	
	for(i = 0; i < a; i++) {	
		if(vetor[i][0] > 0 && vetor[i][1] > 0) {
			printf("primeiro\n");
		} else if(vetor[i][0] > 0 && vetor[i][1] < 0) {
			printf("quarto\n");
		} else if(vetor[i][0] < 0 && vetor[i][1] < 0) {
			printf("terceiro\n");
		} else if(vetor[i][0] < 0 && vetor[i][1] > 0) {
			printf("segundo\n");
		}
	}
	
	return 0;
}
