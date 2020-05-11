#include <stdio.h>

int main() {
	int n, i, j, count;
	scanf("%d", &n);
	int v[n+1][n+1];
	char c[n][n];
	for(i = 0; i < n+1; i++) {
		for(j = 0; j < n+1; j++) {
			scanf("%d", &v[i][j]);
		}
	}

	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			count=0;
			if(v[i][j] == 1)
				count++;
			if(v[i][j+1] == 1)
				count++;
			if(v[i+1][j] == 1)
				count++;
			if(v[i+1][j+1] == 1)
				count++;
			if(count >= 2)
				c[i][j] = 'S';
			else
				c[i][j] = 'U';
		}
	}
	

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%c", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
