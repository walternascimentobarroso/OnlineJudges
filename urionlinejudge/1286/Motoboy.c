#include <stdio.h>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int n, p, i, j, peso, valor;

	while(scanf("%d", &n) && n) {
		scanf("%d", &p);
		int tempo[n+1], pizzas[n+1], m[p+1][n+1];

		for(i = 1; i <= n; i++)
			scanf("%d %d", &tempo[i], &pizzas[i]);

		for(i = 0; i <= p; i++) m[i][0]=0;

		for(i = 1; i <= n; i++) {
			m[0][i] = 0;			
			peso = pizzas[i];
			valor = tempo[i];
			for(j = 1; j <= p; j++) {
				if (peso <= j)
					m[j][i] = max(m[j][i-1], m[j-peso][i-1]+valor);
				else
					m[j][i] = m[j][i-1];
			}	
		}
		printf("%d min.\n", m[p][n]);
	}
	return 0;
}
