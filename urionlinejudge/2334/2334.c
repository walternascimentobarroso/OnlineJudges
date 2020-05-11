#include <stdio.h>

int main() {
	unsigned long long int t;
	scanf("%llu", &t);
	while(t != -1) {
		if(t){
			printf("%llu\n", t-1);
		} else {
			printf("%llu\n", t);
		}
		scanf("%llu", &t);
	}
	return 0;
}
