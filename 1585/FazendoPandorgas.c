#include <stdio.h>
#include <math.h>

int main() {
    int e, i;
	double v[2], rest;
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        scanf("%lf %lf", &v[0], &v[1]);
		v[0] /= 2;
		v[1] /= 2;
		rest = ((v[0]*v[1])/2) * 4;
        printf("%.0f cm2\n", trunc(rest));
    }
    return 0;
}
