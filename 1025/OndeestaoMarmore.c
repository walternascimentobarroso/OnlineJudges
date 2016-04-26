#include <stdio.h>

void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}

int buscaSequencial ( int v[], int x, int n) {
	int m = 0;
	while (/*A*/ m < n && v[m] < x) 
		++m;
	if (m < n && v[m] == x) 
		return m;
	else 
		return -1;
}


int main() {
	
	int n,q,x,t=1;

	while(scanf("%d %d",&n,&q) && n+q>0) {
		
		printf("CASE# %d:\n",t++);

		int v[n], i, pos;
		for(i = 0; i < n; i++) {
			scanf("%d",&v[i]);
		}
		
		shellSort(v, n);

		while(q--){
			
			scanf("%d",&x);
			
			pos = buscaSequencial(v, x, n);

			if(pos >= 0)
				printf("%d found at %d\n", x, pos+1);
			else
				printf("%d not found\n", x);
		}
	}

	return 0;
}

