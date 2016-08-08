#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>

#define MAXIMO 500010
#define MAXN 500

using namespace std;

pair<int,int> p[MAXN];
int n;
int pa[MAXN];
double graph[MAXN][MAXN];
double tree[MAXN], dist[MAXN];
double custo;

double distancia(int x1, int y1, int x2, int y2);
void prim();

int main() {
	int t, i, j;
    scanf("%d",&t);
	while(t--){
        scanf("%d", &n);
		for (i = 0; i < n; i++)
            scanf("%d %d", &p[i].first, &p[i].second);
		
		memset(graph, MAXIMO, sizeof(graph));

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				graph[i][j] = distancia(p[i].first, p[i].second, p[j].first, p[j].second);
		prim();
		printf("%.2f\n", custo/100);
	}
}

double distancia(int x1, int y1, int x2, int y2) {
	return sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
}

void prim() {
	int v0, i;
	double mincusto;
	custo = 0;
	for (i = 1; i < n; i++){
		pa[i] = -1;
		tree[i] = 0;
		dist[i] = graph[0][i];
	}
	pa[0] = 0;
	while(1) {
		mincusto = MAXIMO;
		for (i = 0; i < n; i++)
			if (pa[i] == -1 && mincusto > dist[i])
				mincusto = dist[v0 = i];
		if (mincusto == MAXIMO)
			break;
		pa[v0] = tree[v0];
		custo += mincusto;
		for (i = 0; i < n; i++)
			if (pa[i] == -1 && dist[i] > graph[v0][i]) {
				dist[i] = graph[v0][i];
				tree[i] = v0;
			}
	}
}
