#include <stdio.h>
#include <math.h>

int main(void) {
	int q, d, p;
	double x, w, u, y;

	while (scanf("%d",&q) && q != 0) {
		scanf("%d %d", &d, &p);
		w = q*d;
		u = 100.0/p;
		y = w*u;
		x = trunc(sqrt(y));
		printf("%.0lf\n", x);
	}

	return 0;
}
