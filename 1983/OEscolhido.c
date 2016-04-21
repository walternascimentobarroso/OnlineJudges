#include <stdio.h>

int main() {
	int e, i, fim;
	scanf("%d", &e);
	double v[e][2], max = 0;
	for(i = 0; i < e; i++) {
		scanf("%lf %lf", &v[i][0], &v[i][1]);
		if(v[i][1] >= 8 && v[i][1] > max) {
			max = v[i][1];
			fim = i;
		}
	}
	
	if(max != 0) {
		printf("%.0lf\n", v[fim][0]);
	} else {
		printf("Minimum note not reached\n");
	}
	return 0;
}
