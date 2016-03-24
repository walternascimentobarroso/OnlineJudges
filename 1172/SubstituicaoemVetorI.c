#include <stdio.h>

int main() {
	int x[10], i, a;
	for(i = 0; i < 10; i++) {
		scanf("%d", &a);
		if(a > 0) {
			x[i] = a;
		} else {
			x[i] = 1;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("X[%d] = %d\n", i, x[i]);
	}
	return 0;
}
