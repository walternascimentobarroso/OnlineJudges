#include <stdio.h>

int total;

int fibonacci(int n) {
	total++;
	if(n==1 || n==0)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);
} 

int main() {
	int t, i;
	scanf("%d", &t);
	
	for(i = 0; i < t; i++) {
		int e;
		scanf("%d", &e);
		total = -1;
		printf("fib(%d) = %d calls = %d\n",e, total ,fibonacci(e));
	}
	return 0;
}
