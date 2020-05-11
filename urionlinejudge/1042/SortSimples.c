#include <stdio.h>

void order(int vetor[]);

int main() {
	int a, b, c, vetor[3];
	
	scanf("%d %d %d", &a, &b, &c);
	vetor[0] = a;
	vetor[1] = b;
	vetor[2] = c;
	
	order(vetor);
	
	printf("%d\n%d\n%d\n\n", vetor[0], vetor[1], vetor[2]);
	
	printf("%d\n%d\n%d\n", a, b, c);
	
	return 0;
}

void order(int vetor[]) {
	int temp, i, j;
	
	for(i = 0; i < 3; i++) {
		for (j = i+1; j >0; j--) {
			if(vetor[j] < vetor[j-1]) {
				temp = vetor[j];
				vetor[j] = vetor[j-1];
				vetor[j-1] = temp;
			}
		}
	}	
}

