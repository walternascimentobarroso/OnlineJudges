#include <stdio.h>

int main() {
	float sal, imposto = 0;
	scanf("%f", &sal);
	if(sal <= 2000.00) {
		printf("Isento\n");
	}	else {
		if(sal > 4500.00) {
			sal -= 4500;
			imposto = sal*0.28;
			sal = 4500;
		}
		if(sal >= 3000.01 && sal <= 4500.00) {
			sal -= 3000;
			imposto += sal*0.18;
			sal = 3000;
		}
		if(sal >= 2000.01 && sal <= 3000.00) {
			sal -= 2000;
			imposto += sal*0.08;
			sal = 2000;
		}
		printf("R$ %.2f\n", imposto);
	}
	return 0;
}

