#include <stdio.h>

void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}

int main() {
	int e, i, j;
	scanf("%d", &e);
	int v[e];
	int result[e], impresso[e];
	int verdadeiro = 1;
	for(i = 0; i < e; i++) {
		scanf("%d", &v[i]);
		result[i] = 0;
	}
	shellSort(v, e);
	for(i = 0; i < e; i++) {
		for(j = 0; j < e; j++) {
			if(v[i] == v[j])
				result[i]++;
		}
	}
	for(i = 0; i < e; i++) {
		verdadeiro = 1;
		for(j = 0; j < e; j++) {
			if(v[i] == impresso[j]) {
				verdadeiro = 0;
			}
		}
		if(verdadeiro == 1) {
			printf("%d aparece %d vez(es)\n", v[i], result[i]);
			impresso[i] = v[i];
		}
	}
	return 0;
}
