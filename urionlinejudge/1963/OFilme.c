#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.2lf%%\n", ((100*b)/a) - 100);
	return 0;
}
