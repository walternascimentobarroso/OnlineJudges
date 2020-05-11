#include <stdio.h>

int main() {
	int r,l;
	while(scanf("%d %d", &l, &r) && l+r != 0 ) {
		printf("%d\n", l+r);
	}
	return 0;
}
