#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	int v[e], menor, indice=0;
	for(i = 0; i < e; i++) {
		scanf("%d", &v[i]);
	}
	menor = v[0];
	for(i = 0; i < e; i++) {
		if(menor > v[i]) {
			menor = v[i];
			indice = i;
		}
	}
	printf("%d\n", indice+1);
}
