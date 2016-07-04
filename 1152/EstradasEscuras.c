#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 200000
 
int custo;
int pai[N];
 
typedef struct {
	int x, y, v;
} Grafo;
 
Grafo grafo[N];
 
int cmp(const void *a, const void *b);
void definir(int n);
int buscar(int x);
int unir(int x, int y, int p);
 
int main() {
	int m, n, i;
	 
	while(scanf("%d %d", &m, &n) && m && n) {
		memset(&grafo, 0, sizeof(grafo));
		custo = 0;
		for(i = 0; i < n; i++) {
			scanf("%d %d %d",&grafo[i].x, &grafo[i].y, &grafo[i].v);
			custo += grafo[i].v;
		}
		definir(m);
		qsort(grafo, n, sizeof(grafo[0]), cmp);
		for (i = 0; i < n; ++i)
			unir(grafo[i].x, grafo[i].y, i);
		printf("%d\n",custo);
	}
	return 0;
}

int cmp(const void *a, const void *b) {
	return (*(Grafo *)a).v - (*(Grafo *)b).v;
}
 
void definir(int n) {
	int i;
	for (i = 0; i <= n; ++i)
		pai[i] = i;
}
 
int buscar(int x) {
	if (pai[x] != x)
		pai[x] = buscar(pai[x]);
	return pai[x];
}
 
int unir(int x, int y, int p) {
	int i, j;
	i = buscar(x);
	j = buscar(y);
	if (i != j) {
		custo -= grafo[p].v;
		(i > j) ? (pai[i] = j) : (pai[j] = i);
		return 1;
	}
	return 0;
}
