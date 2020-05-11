#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	for(i = 0; i < e; i++) {
		if(i == e-1) {
			printf("Ho!\n");
		} else {
			printf("Ho ");
		}
	}
	return 0;
}
