#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a < c + b) && (c < a + b) && (b < a + c)) {
		printf("S\n");
	} else if ((a < d + b) && (d < a + b) && (b < a + d)) {
		printf("S\n");
	} else if ((a < d + c) && (d < a + c) && (c < a + d)) {
		printf("S\n");
	} else if ((d < b + c) && (b < d + c) && (c < b + d)) {
		printf("S\n");
	} else {
		printf("N\n");
	}
	return 0;
}
