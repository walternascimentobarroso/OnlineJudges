#include <stdio.h>

#define INF 0x3f3f3f3f
int a[100002];
int trocas;

void merge(int low, int mid, int high) {
	int n1 = mid - low + 1;       // qtd de elementos da 1a metade
	int n2 = high - mid;          // qtd de elementos da 2a metade
	int left[n1 + 1], right[n2 + 1]; // Arrays auxiliares. O +1 é para o sentinela
	// left <- a[low..mid]; right <- a[mid+1..right]
	int i = 0, j = 0, k;
	for (i = 0; i < n1; i++)
		left[i] = a[low + i];
	for (j = 0; j < n2; j++)
		right[j] = a[mid + 1 + j];
	// Sentinelas
	left[n1] = INF;
	right[n2] = INF;
	i = 0;
	j = 0;
	for (k = low; k <= high; k++)
		if (left[i] <= right[j]) {
			a[k] = left[i++];
		} else {
			trocas += ((mid + 1) - (low + i));
			a[k] = right[j++];
		}
}

void merge_sort(int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
	}
}

int main() {
	int tam, i;
	while (scanf("%d", &tam) && tam) {
		for (i = 0; i < tam; i++)
			scanf("%d", &a[i]);
		trocas = 0;
		merge_sort(0, tam - 1);
		printf((trocas % 2 ? "Marcelo\n" : "Carlos\n"));
	}
	return 0;
}
