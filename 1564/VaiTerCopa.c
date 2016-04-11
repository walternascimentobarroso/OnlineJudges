#include <stdio.h>

int main() {
	int e;
	while (scanf("%d",&e) != EOF) {
		if(e > 0) {
			printf("vai ter duas!\n");
		} else {
			printf("vai ter copa!\n");
		}
	}
	return 0;
}
