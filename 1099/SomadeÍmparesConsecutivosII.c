#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	int vetor[e][2];
	
	for(i = 0; i < e; i++) {
		scanf("%d %d", &vetor[i][0], &vetor[i][1]);
	}
	
	for(i = 0; i < e; i++) {
		int a, b, j, temp, total=0;
		a = vetor[i][0];
		b = vetor[i][1];
		
		if(a > b) {
			temp = a;
			a = b;
			b = temp;
		}

		for(j = a+1; j < b; j++) {
			if((j%2) != 0) {
				total +=j;
			}
		}
		printf("%d\n", total);
	}
	
	return 0;
}
