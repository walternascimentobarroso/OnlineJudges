#include <stdio.h>
#include <math.h>

int main() {
	int n;
	while(scanf("%d", &n) != EOF)
		printf("%1.lf\n", log2(n));
	return 0;
}
