#include <stdio.h>

#define SIZE 1000
typedef unsigned long long ull;

typedef struct linha {
    ull p;
    int q;
} linha;

int t,po;
linha H[SIZE];

int verifica(linha a, linha b, linha c);
void atualiza(linha l);
ull avalia(int id, int x);
ull consulta(int x);

int main() {
	ull dp[2][SIZE], f[SIZE], g[SIZE];
	int N, K, X[SIZE],W[SIZE], i, j, r;
	linha l;

    while(scanf("%d %d", &N, &K) != EOF) {
        for(i = 0; i < N; i++)
            scanf("%d %d", &X[i], &W[i]);
        
        f[0] = W[0];
        g[0] = (ull)X[0] * W[0];
        
        for(i = 1; i < N; i++) {
            f[i] = f[i - 1] + W[i];
            g[i] = g[i - 1] + (ull)X[i] * W[i];
        }

        for(i = 0; i < N; i++)
            dp[1][i] = X[i] * f[i] - g[i];
        
        for(j = 2,r = 0; j <= K; j++,r ^= 1){
            t = 0; po = 0;
            
            for(i = j - 1; i < N; i++) {
				l.p = dp[r ^ 1][i - 1] + g[i - 1];
				l.q = -f[i - 1];
                atualiza(l);
                dp[r][i] = X[i] * f[i] - g[i] + consulta(X[i]);
            }
        }
        
        printf("%lld\n",dp[K & 1][N - 1]);
    }
    
    return 0;
}

int verifica(linha a, linha b, linha c) { return (a.p - b.p) * (c.q - a.q) < (a.p - c.p) * (b.q - a.q); }

void atualiza(linha l) {
    while(t >= 2 && !verifica(H[t - 2],H[t - 1],l)){
        if(po == (t - 1)) --po;
        --t;
    }
    H[t++] = l;
}

ull avalia(int id, int x) { return H[id].p + (ull)H[id].q * x; }

ull consulta(int x) {
    while(po + 1 < t && avalia(po,x) > avalia(po + 1,x)) ++po;
    return avalia(po,x);
}
