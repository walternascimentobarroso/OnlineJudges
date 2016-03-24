#include <stdio.h>

int main() {
	int i, j = 7, x = 7;
	
	for(i = 1; i <= 9; i+=2) {
		while(j >= x-2) {
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		j = x+2;
		x = j;
		
	}
	
	return 0;
}
