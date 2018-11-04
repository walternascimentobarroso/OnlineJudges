#include <stdio.h>
#include <math.h>

int main() {
	int Xf, Yf, Xi, Yi, Vi, R1, R2, X, Y;
	float t;
	
	while(scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF) {
		X = (Xi-Xf)*(Xi-Xf);
	        Y = (Yi-Yf)*(Yi-Yf);
		t = sqrt(X+Y) + Vi*1.50;
		if(t > (R1+R2)) {
			printf("N\n");
		} else {
			printf("Y\n");
		}
	}	
	return 0;
}
