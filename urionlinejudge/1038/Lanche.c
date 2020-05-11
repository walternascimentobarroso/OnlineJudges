#include <stdio.h>

int main() {
	int a, b;
	float array[] = {0, 4, 4.5, 5, 2, 1.5};
	scanf("%d %d", &a, &b);
	printf("Total: R$ %.2f\n", array[a]*b);
	return 0;
}

