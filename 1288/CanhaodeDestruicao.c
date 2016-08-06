#include <stdio.h>

int max(a, b) {
	return (a > b) ? a : b;
}

int main() {
    int t, n, i, k, r, j, cap;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);

		int valores[n+1];
        int pesos[n+1];

        for(i = 1; i <= n; i++) {
            scanf("%d %d", &valores[i], &pesos[i]);
        }
        scanf("%d", &k);
        scanf("%d", &r);
		cap = k;
        int matriz[cap+1][n+1];

        for(j = 0; j <= cap; j++) {
			matriz[j][0] = 0;
		}

        for(i = 1; i <= n; i++) {
			matriz[0][i] = 0;

            int pn = pesos[i];
            int vn = valores[i];
            
            for(j = 1; j <= cap; j++) {

               if(pn <= j) { 
                    matriz[j][i] = max(matriz[j][i-1], matriz[j-pn][i-1]+vn);
               } else{
                    matriz[j][i] = matriz[j][i-1];
               }
            }
        }
		if(matriz[cap][n] >= r)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");
    }
    return 0;
}
