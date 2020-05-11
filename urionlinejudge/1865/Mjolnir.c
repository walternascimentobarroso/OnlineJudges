#include <stdio.h>
#include <string.h>

int main() {
	int e, i, f;
	char n[10];
	scanf("%d", &e);
	for(i = 0; i < e; i++) {
		scanf("%s %d", n, &f);
		if(strcmp(n,"Thor") == 0) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
	return 0;
}
