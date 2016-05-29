#include <stdio.h>

int main() {
	int n, i, m, j;
	while(scanf("%d", &n) && n != 0) {
		int v[n];
		m = 0;
		j = 0;
		for(i = 0; i < n; i++) {
			scanf("%d", &v[i]);
			(v[i] == 0) ? m++ : j++;
		}
		printf("Mary won %d times and John won %d times\n", m, j);
		
	}
	return 0;
}
