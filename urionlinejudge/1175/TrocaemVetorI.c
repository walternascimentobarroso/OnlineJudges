#include <stdio.h>
#define SIZE 20

int main() {
	int N[SIZE], i, temp;
	
	for(i = 0; i < SIZE; i++) {
		scanf("%d", &N[i]);
	}

	for(i = 0; i < SIZE; i++) {
		if(i < (SIZE/2)) {
			temp = N[i];
			N[i] = N[SIZE-(i+1)];
			N[SIZE-(i+1)] = temp;
		}
	}

	for(i = 0; i < SIZE; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
