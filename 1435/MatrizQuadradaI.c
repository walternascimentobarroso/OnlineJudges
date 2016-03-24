#include <stdio.h>

int main(void){
	int v[99], n, i, j, a = 0, p, c, k, f, l;

	while(scanf("%d", &n), n!=0) {
		int m[n][n];
		p=1;
		c=0;
		k=0;
		f=n;
		while(k<n) {
			i=c; 
			while(i<f) {
				j=c; 
				while(j<f) {
					m[i][j]=p;
					j++;
				}
				i++;
			}
			p++;
			c++;
			f--;
			k++;
		}
		i=0; 
		while(i<n) {
			j=0;
			while(j<n) {
				if(j == n-1) {
					printf("%3d\n", m[i][j]);
				} else {
					printf("%3d ", m[i][j]);
				}
				j++;
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}
