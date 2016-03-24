#include <stdio.h>

int main() {
	int e, i, menor, posicao;

	scanf("%d", &e);

	int v[e];

	for(i = 0; i < e; i++) {
			scanf("%d", &v[i]);
	}
	menor = v[0];
	posicao = 0;
	for(i = 0; i < e; i++) {
		if(menor > v[i]) {
			menor = v[i];
			posicao = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	return 0;
}
