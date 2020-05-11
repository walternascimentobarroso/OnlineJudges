#include <stdio.h>

int main() {
	int i, j, n, k, x, pula=0;
	while(scanf("%d", &n), n!=0) {
		i=1; 
		while(i<=n) {
			j=1; 
			while(j<=n) {
				if(j==i) {
					k=1;
					if(i==n) {
						printf("%3d\n", k);
					} else {
						printf("%3d ", k);
					}
					k++;
					x=i+1;
				} else if(j>i) {
					if(j==n) {
						printf("%3d", k);
					} else {
						printf("%3d ", k);
					}
					k++;
				} else {
					printf("%3d ", x);
					x--;
				}
				j++;
			}
			if(i!=n) {
				printf("\n");
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}
