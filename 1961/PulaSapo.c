#include <stdio.h>
#include <math.h>

int main() {
	int p, n, i, count=0;
	scanf("%d %d", &p, &n);
	int v[n];
	
	for(i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < n-1; i++) {
		if(abs(v[i]-v[i+1]) > p) {
			printf("GAME OVER\n");
			count++;
		}
	}

	if(count == 0) {
		printf("YOU WIN\n");
	}	

	return 0;
}
