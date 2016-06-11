#include <stdio.h>

int main() {
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	
	
	if(a < (b+c) && b < (a+c) && c < (b+a)) {
		float perimetro;
		
		perimetro = a+b+c;
		
		printf("Perimetro = %.1f\n", perimetro);
	} else {
		float area;
		
		area = ((a+b)*c)/2;
		
		printf("Area = %.1f\n", area);
	}
	
	return 0;
}
