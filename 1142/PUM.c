#include <stdio.h>

int main() {
	int a, i, j = 1, x = 0;
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++) {
		while(x < 3) {
			printf("%d ", j++);
			x++;
		}
		x = 0;
		j++;
		printf("PUM\n");
	}
	
	return 0;
}
