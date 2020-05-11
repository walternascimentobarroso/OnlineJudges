#include <stdio.h>
#define SIZE 1000

int main() {
	int e, i, j = 0, vetor[SIZE];
	scanf("%d", &e);
	for(i = 0; i < SIZE; i++) {
		vetor[i] = j;
		j++;
		if(j == e) {
			j = 0;	
		}
		printf("N[%d] = %d\n", i, vetor[i]);
	}
	return 0;
}
