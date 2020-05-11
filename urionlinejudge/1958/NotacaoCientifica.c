#include <stdio.h>

int main() {
	long double a;
	scanf("%Lf", &a);
	printf("%+.4LE\n", a);
	return 0;
}
