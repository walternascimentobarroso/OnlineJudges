#include <stdio.h>

int main() {
	int i = 1, j = 60;
	
	while(i <= 37) {
		printf("I=%d J=%d\n", i, j);
		j -= 5;
		i += 3;
	}
	
	return 0;
}
