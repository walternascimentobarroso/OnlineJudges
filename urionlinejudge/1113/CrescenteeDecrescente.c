#include <stdio.h>

int main() {
	int vetor[999][2], a = 0, i;
	
	for(i = 0; a == 0; i++) {
		scanf("%d %d", &vetor[i][0], &vetor[i][1]);
		if(vetor[i][0] == vetor[i][1]){
			a = i;
		}
	}
	
	for(i = 0; i < a; i++) {	
		if(vetor[i][0] < vetor[i][1]){
			printf("Crescente\n");
		} else {
			printf("Decrescente\n");
		}
	}
	
	return 0;
}
