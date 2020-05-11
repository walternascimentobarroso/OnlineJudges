#include <stdio.h>

int main() {
	int x, i, a = 0;

	while(a == 0) {
		scanf("%d", &x);
		for(i = 1; i <= x; i++) {
			if(i == x) {
				printf("%d\n", i);
			} else {
				printf("%d ", i);
			}
		}
		if(x == 0) {
			a = i;
		}
	}
	
	
	return 0;
}
