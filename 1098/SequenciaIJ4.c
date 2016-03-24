#include <stdio.h>

int main() {
	float i;
	int j;
	int x;

	for(i = 0; i <= 2.2; i += 0.2) {
		for(j = 1+i; j <= 3+i; j++) {	
			x = (i-(int)i)*10;		
			if(i == (int)i || x == 0){
				printf("I=%.0f J=%d\n", i, j);	
			} else {				
				printf("I=%.1f J=%d.%d\n", i, j, x);
			}
		}
	}
	
	return 0;
}
