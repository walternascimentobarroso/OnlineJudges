#include <stdio.h>
#include <math.h>

int main() {
	float X1;
	float Y1;
	
	float TOTAL;
	float X2;
	float Y2;
	
	scanf("%f %f\n%f %f", &X1, &Y1, &X2, &Y2);
	
	TOTAL = ((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1));
	
	printf("%.4f\n", sqrt(TOTAL));
	
	return 0;
}

