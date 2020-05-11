#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	int v[e][2];
	
	for(i = 0; i < e; i++) {
		scanf("%d %d", &v[i][0], &v[i][1]);
	}
	
	for(i = 0; i < e; i++) {
		printf("%d\n", v[i][0] + v[i][1]);
	}
	return 0;
}
