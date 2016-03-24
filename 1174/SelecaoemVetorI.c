#include <stdio.h>
#include <string.h>
#define IND 100
#define MAX 10

int main() {
	float A[IND];
	int i;
	memset (A, 0.0, sizeof(A));
	for(i = 0; i < IND; i++) {
		scanf("%f", &A[i]);
	}
	for(i = 0; i < IND; i++) {
		if(A[i] <= MAX) {
			printf("A[%d] = %.1f\n", i, A[i]);
		}
	}
	return 0;
}
