#include <stdio.h>

int main() {
    long long int N,j,n,x,i,m;
    scanf ("%lld",&N);
    for (j=1; j<=N; j++) {
        scanf("%lld %lld",&n,&m);
        for (i=1; i<=n; i++) {
            x=m*i;
            while (x>n) {
                x=((m*(x-n)-1)/(m-1));
			}
        }
        printf ("Case %lld: %lld\n",j,x);
    }
    return 0;
}
