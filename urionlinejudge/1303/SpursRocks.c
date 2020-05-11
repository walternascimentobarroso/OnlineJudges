#include <stdio.h>
#include <stdlib.h>

typedef struct time {
	int n, p, m, t;
} time;

int compare(const void *a, const void *b);

int main() {
	int n, i, p, x, y, z, w;
	int h = 0;
	while(scanf("%d", &n) && n != 0) {
		if(h != 0) printf("\n");
		h++;
		int array[n][4];
		p = n*(n-1)/2;
		for(i = 0; i < n; i++) {
			array[i][0] = 0;
			array[i][1] = 0;
			array[i][2] = 0;
			array[i][3] = 0;
		}
		for(i = 0; i < p; i++) {
			scanf("%d %d %d %d", &x, &y, &z, &w);
			if(array[x-1][0] == 0) array[x-1][0] = x;
			if(array[z-1][0] == 0) array[z-1][0] = z;
			array[x-1][2] += y;
			array[x-1][3] += w;
			array[z-1][2] += w;
			array[z-1][3] += y;
			if(y - w > 0){
				array[x-1][1] += 2;
				array[z-1][1] += 1;
			} else {
				array[z-1][1] += 2;
				array[x-1][1] += 1;
			}
		}
		qsort(array,n,sizeof(time),compare);
		printf("Instancia %d\n",h);
		for(i = 0; i < n; i++){
			printf("%d",array[i][0]);
			if( i != n-1)
				printf(" ");
		}
		printf("\n"); 
	}
	return 0;
}

int compare(const void *a, const void *b) {
	time *tA = (time *) a; 
	time *tB = (time *) b;
	if(tB->p != tA->p)
		return tB->p - tA->p;
	if(tB->t == 0) tB->t = 1;
	if(tA->t == 0) tA->t = 1;
	if((float)tB->m/(float)tB->t != (float)tA->m/(float)tA->t){
		if((float)tB->m/(float)tB->t - (float)tA->m/(float)tA->t > 0)
			return 1;
		else
			return -1;
	}
	if(tB->m != tA->m)
		return tB->m - tA->m;
	return tB->n - tA->n;
}
