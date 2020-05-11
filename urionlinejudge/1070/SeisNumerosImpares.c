#include <stdio.h>

int main() {
	int a, i, count=6;
	scanf("%d", &a);
	
	for(i = a; count != 0; i++) {
		if((i%2) != 0){
			printf("%d\n",i);
			count--;
		}
	}
	
	return 0;
}

