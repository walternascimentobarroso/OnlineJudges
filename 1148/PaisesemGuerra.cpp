#include <stdio.h>
#include <iostream>
#define INFINITO 10000000
#define MMAX 501
 
using namespace std;
 
int g[MMAX][MMAX];
 
int dijkstra(int o, int d, int n);
 
int main() {
    int i, j, n, e, x, y, h, o, d, k, valorFinal;
    while( scanf("%d %d", &n, &e) && n+e) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n;j++)
                g[i][j]=INFINITO;

        for (i = 1; i <= e; i++) {
			scanf("%d %d %d", &x, &y, &h);
            g[x][y] = h;
            if (g[y][x] != INFINITO) {
                g[x][y] = 0;
                g[y][x] = 0;
            }
        }
		scanf("%d", &k);
        for (i = 1; i <= k; i++) {
			scanf("%d %d", &o, &d);
			valorFinal = dijkstra(o,d, n);
            if (valorFinal == INFINITO)
				printf("Nao e possivel entregar a carta\n");
            else
				printf("%d\n", valorFinal);
        }
		printf("\n");
    }
    return 0;
}

int dijkstra(int o, int d, int n) {
    int minimo, atual, passou[MMAX], pred[MMAX],custo[MMAX], i;
    for (i = 1; i <= n; i++) {
        pred[i]=-1;
        custo[i]=INFINITO;
        passou[i]=0;
    }
    custo[o] = 0;
    atual = o;
    while (atual != d) {
        for(i = 1; i <= n;  i++) {
            if(custo[i] > custo[atual] + g[atual][i])
                custo[i] = custo[atual] + g[atual][i];
        }
        minimo = INFINITO;
        passou[atual]=1;
        for (i = 1; i <= n; i++) {
            if ((custo[i]<minimo) && (!passou[i])) {
                minimo = custo[i];
                atual = i;
            }
        }
        if (minimo == INFINITO) return INFINITO;
    }
    return custo[d];
}
