#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	int v[e];
	for(i = 0; i < e; i++) {
		scanf("%d", &v[i]);
	}

	for(i = 0; i < e; i++) {
		if(v[i]%2 == 0) {
			printf("0\n");
		} else {
			printf("1\n");
		}
	}
}
