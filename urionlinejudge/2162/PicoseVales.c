#include <stdio.h>

int main() {
    int n, i, nlogonia=1;
    scanf("%d", &n);
    int v[n], p[n];
    for(i = 0; i < n; i++) 
        scanf("%d", &v[i]);
	
    for(i = 1; i < n; i++) {
		if(v[i-1] > v[i])
			p[i]=0;
		if(v[i-1] < v[i]) 
			p[i]=1;
		if(v[i-1] == v[i]) {
			nlogonia=0;
			break;
		}
    }

    for(i = 1; i < n; i++) {
		if(p[i-1] == p[i]) {
			nlogonia=0;
			break;
		}
    }

    printf("%d\n", nlogonia);

    return 0;
}
