#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, d, resultH, resultM, resultF;
	
	while(scanf("%d %d %d %d", &a, &b, &c, &d) && (a+b+c+d) != 0) {
		c = (c == 0 && a != 0) ? 24 : c;
		resultH = (a > c) ? abs(a -(c+24)) : abs(a - c);
		resultH = (a == c && b > d) ? 24 : resultH;
		resultM = (b > d) ? abs(b - d) : b - d;
		resultF = (resultH * 60) - resultM;
		printf("%d\n", resultF);
	}
	
	return 0;
}
