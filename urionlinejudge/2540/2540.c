#include <stdio.h>
#include <math.h>

int main() {
	int n, i, total;
	while(scanf("%d", &n) != EOF) {
		int v[n];
		total = 0;
		for(i=0; i < n; i++) {
			scanf("%d", &v[i]);
			if(v[i] == 1) {
				total++;
			}
		}
		if(total >= ceil(n*(2.0/3.0)))
			printf("impeachment\n");
		else
			printf("acusacao arquivada\n");
	}
	return 0;
}


