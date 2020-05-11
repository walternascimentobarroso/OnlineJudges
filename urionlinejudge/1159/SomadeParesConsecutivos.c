#include <stdio.h>

int main() {
	int vetor[99], i, a = 0, b, count, c, j;
	
	for(i = 0; a == 0; i++) {
		scanf("%d", &vetor[i]);
		if(vetor[i] == 0){
			a = i;
		}
	}
	
	for(j = 0; j < a; j++) {
		i = 0;
		count = 0;
		c = 0;
		b = vetor[j];
		while(c < 5) {
			if(((b+i)%2) == 0) {
				count += b+i;
				c++;
			}
			i++;
		}
		printf("%d\n", count);
	}
	
	return 0;
}

