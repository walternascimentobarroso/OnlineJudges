#include <stdio.h>

int main() {
	int number, hour;
	double value, salary;
	
	scanf("%d", &number);
	scanf("%d", &hour);
	scanf("%lf", &value);
	
	salary = value * hour;
	
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number,salary);
	
	return 0;
}

