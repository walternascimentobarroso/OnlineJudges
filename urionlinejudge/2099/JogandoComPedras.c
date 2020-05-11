#include <stdio.h>
#define SIZE 10000
#define MOD 1000000007

typedef unsigned long long ull;
ull m[SIZE][SIZE] = {{0}};

ull p(int n, int k) {
    if ((n == 0 && k == 0) || (n == k) || (k == 1))
        return 1;
    else if ((n <= 0 || k <= 0) || (n < k))
        return 0;
    else if (k == 2)
        return (int)(n / 2);

    if(m[n][k] != 0)
        return m[n][k];

    return m[n][k] = ( p(n-k,k)+p(n-1,k-1) ) % MOD;
}

int main() {
    ull aux = 0;
	int n, i, t;
	scanf("%d",&n);

	t = ((n % 2) == 0) ? 1 : 2;

    for(i = t; i <= n; i += 2) {
        m[n][i] = p(n,i);
        aux += m[n][i] % MOD ;
    }

	printf("%lld\n", aux % MOD);
    return 0;
}

