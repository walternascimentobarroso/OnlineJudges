#include <stdio.h>

int main() {
	int a, b, i, temp, total=0;
	scanf("%d %d",  &a, &b);
	if(a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	for(i = a+1; i < b; i++) {
		if((i%2) != 0) {
			total +=i;
		}
	}
	printf("%d\n", total);
	return 0;
}

