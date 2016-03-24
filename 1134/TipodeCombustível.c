#include <stdio.h>

int main() {
	int e, i, a = 0, countA = 0, countG = 0, countD = 0;
	for(i = 0; a == 0; i++) {
		scanf("%d", &e);
		if(e == 1) {
			countA++;
		} else if(e == 2) {
			countG++;
		} else if(e == 3) {
			countD++;
		} else if(e == 4) {
			a = 1;
		}
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", countA, countG, countD);
	
	return 0;
}
