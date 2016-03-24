#include <stdio.h>
#define INDICE 10

int main() {
	int n[INDICE],i, v;
	scanf("%d", &v);
	for(i = 0; i < INDICE; i++) {
		n[i] = v;
		v +=v;
	}

	for(i = 0; i < INDICE; i++) {
		printf("N[%d] = %d\n", i, n[i]);
	}
	return 0;
}
