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
	int v[10] = {8,3,7,4,9,2,3,8,7,4}, i;
	shellSort(v, 10);
	for(i = 0; i < 10; i++) {
		printf("%d\n", v[i]);
	}
	return 0;
}
