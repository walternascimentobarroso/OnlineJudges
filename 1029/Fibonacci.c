#include <stdio.h>

int fibonacci(int n) {
   if(n==1 || n==0)
       return n;
   else
       return fibonacci(n-1) + fibonacci(n-2);
} 

int main() {
	int e;
	scanf("%d", &e);
	printf("fib(%d) calls = %d\n",e ,fibonacci(e));
	return 0;
}
