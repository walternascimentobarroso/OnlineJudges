#include <stdio.h>

int main() {
	int vetor[99], a = 0, i, total = 0;
	float f;
	for(i = 0; a == 0; i++) {
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0) {
			a = i;
		}
	}
	
	for(i = 0; i < a; i++) {
		total += vetor[i];
	}
	f = (float)total/(float)a;
	printf("%.2f\n", f);
	return 0;
}
