#include <stdio.h>

int main() {
	int n[70][70],k,i,j,s;
	while (scanf("%d",&k) !=EOF) {
		for (i = 0; i < k; i++) {
			for (j = 0; j < k; j++) {
				s = k-1-j;
				if (i == j) {
					n[i][j] = 1;
				}
				if (i == s || (i == s && i == j)) {
					n[i][j] = 2;
				}
				if(i != s && i != j) {
					n[i][j] = 3;
				}
			}
		}

		for (i = 0; i < k; i++) {
			for (j = 0; j < k; j++) {
				printf("%d", n[i][j]);
			}
			printf ("\n");
		}
	}
	return 0;
}

