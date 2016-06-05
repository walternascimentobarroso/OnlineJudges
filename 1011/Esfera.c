#include <stdio.h>

#define PI 3.14159

int main() {
	int R;
	long double VOLUME;
	
	scanf("%d", &R);
	
	VOLUME = (4/3.0) * PI * R * R * R;
	
	printf("VOLUME = %.3Lf\n", VOLUME);
	return 0;
}

