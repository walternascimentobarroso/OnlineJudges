#include <stdio.h>
#define SIZE 12

int main() {
	int L, i, j;
	double M[SIZE][SIZE], soma=0.0;
	char T;
	
	scanf("%d ", &L);
	scanf("%c", &T);
	
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
		
	for(i = 0; i < SIZE; i++) {
		soma += M[L][i];
	}
	if(T == 'S') {	
		printf("%.1lf\n", soma);
	} else if(T == 'M') {
		printf("%.1lf\n", soma/12);
	}
	return 0;
}
