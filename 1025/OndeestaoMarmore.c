#include <stdio.h>

int cmp (const void *x, const void *y) {
	return (*(int *)x - *(int *)y);
}

int buscaBinaria(int v[], int x, int n) {
	
	int ini,meio,fim;
	ini = 0;
	fim = n;
	
	while(ini <= fim) {
		meio = (ini+fim)/2;
		if(v[meio] == x)
			break;
		else if (v[meio]>x)
			fim = meio - 1;
		else
			ini = meio + 1;
	}

	if(v[meio] == x){
		int p = meio;
		while(p-1 >= 0 && v[p-1] == x)
			p--;
		return p;
	}

	return -1;
}

int main() {
	
	int n,q,x,t=1, i, pos;

	while(scanf("%d %d",&n,&q) && n+q) {
		printf("CASE# %d:\n",t++);
		int v[n];
		for(i = 0; i < n; i++)
			scanf("%d",&v[i]);
		
			qsort(v, n, sizeof (int), cmp);

		while(q--){
			scanf("%d",&x);
			pos = buscaBinaria(v, x, n);
			if(pos >= 0)
				printf("%d found at %d\n", x, pos+1);
			else
				printf("%d not found\n", x);
		}
	}

	return 0;
}

