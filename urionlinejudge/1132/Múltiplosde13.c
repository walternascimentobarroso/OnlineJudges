#include <stdio.h>

int main() {
	int a, b, i, count=0;
	
	scanf("%d\n%d", &a, &b);
	
	if(a > b) {
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
	
	for(i = a; i <= b; i++) {
		if((i%13) != 0) {
			count += i;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
