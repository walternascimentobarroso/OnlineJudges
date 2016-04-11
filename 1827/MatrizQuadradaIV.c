#include <stdio.h>

int main() {
	int e, i, j, t, c;
	while(scanf("%d", &e) != EOF) {
		int v[e][e];
		for(i = 0; i < e; i++) {
			for(j = 0; j < e; j++) {
				if((i == j) || (i == e-1 && j == e-1)) {	
					v[i][j] = 2;
				} else if(j == e-1-i) {
					v[i][j] = 3;
				} else {
					v[i][j] = 0;
				}
				t = (int) e/3;
				if((i >= t && j >= t) && ( i < e-t && j < e-t)) {
					v[i][j] = 1;
				}
				c = (int) e/2;
				if((i == c && j == c) && e%2 != 0) {
					v[i][j] = 4;
				}
				if( j == e-1) {
					printf("%d\n", v[i][j]);
				} else {
					printf("%d", v[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
