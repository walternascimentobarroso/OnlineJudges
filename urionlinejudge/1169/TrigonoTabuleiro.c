#include <stdio.h>
#include <math.h>
#define KILO 12000
#define BASE 2

typedef unsigned long long llu;

int main() {
	int n,s;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&s);
		printf("%lld kg\n",(llu)(pow(BASE,(s-1))*BASE/KILO));
	}
	return 0;
}
