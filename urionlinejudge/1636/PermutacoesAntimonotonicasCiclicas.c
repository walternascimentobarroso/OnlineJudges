#include <stdio.h>

void troca(int vetor[], int i, int j);

int main() {
	int i, e, j;
	while (scanf("%d", &e) && e) {
		int v[e];
		if(e == 1)
			printf("1 \n");
		else if(e == 2)
			printf("1 3 \n");
		else {
			for(i = 0; i < e; i++)
				v[i] = i+1;
			for(i = 1; i < e; i=i+2) {
				if(i+1 < e)
					troca(v, i, i+1);
			}
			for(i = 0; i < e; i++)
				printf("%d ", v[i]);
			printf("\n");
		}
	}
	return 0;
}

void troca(int vetor[], int i, int j) {
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}
