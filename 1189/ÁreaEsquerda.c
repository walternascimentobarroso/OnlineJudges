#include <stdio.h>
#define SIZE 12

int main() {
	int i, j, count=0;
	double M[SIZE][SIZE], soma=0.0;
	char O;
	
	scanf("%c", &O);
	
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
		
	for(i = 1; i < SIZE-6; i++) {
		for(j = 0; j < i; j++) {
			soma += M[i][j];
			count++;
		}
	}
	
	for(i = 6; i < SIZE-1; i++) {
		for(j = 0; j < SIZE-i-1; j++) {
			soma += M[i][j];
			count++;
		}
	}
	
	if(O == 'S') {	
		printf("%.1lf\n", soma);
	} else if(O == 'M') {
		printf("%.1lf\n", soma/count);
	}
	return 0;
}
