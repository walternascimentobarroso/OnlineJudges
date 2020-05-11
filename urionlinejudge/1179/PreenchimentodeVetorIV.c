#include <stdio.h>
#include <string.h>
#define SIZEI 5
#define SIZEII 15

int main() {
	int V[SIZEII], i, j, imp=0, p=0, a=1, x=0, impar[SIZEI+3], par[SIZEI+3];

	memset(V,0,SIZEII);
	memset(impar,0,SIZEI);
	memset(par,0,SIZEI);

	for(i=0; i < SIZEII; i++) {
		scanf("%d",&V[i]);
	}

	for(i=0; i < SIZEII; i++) {
		if(V[i]%2 == 0) {
			par[p] = V[i];
	                p++;
	               	if(p == SIZEI) {
				for(j=0; j < SIZEI; j++) {
					printf("par[%d] = %d\n", j, par[j]);
				}
			}
		} else {
			impar[imp] = V[i];
	                imp++;
	               	if(imp == SIZEI) {
				for(j=0; j < SIZEI; j++) {
					printf("impar[%d] = %d\n", j, impar[j]);
				}
			}
		}
	}

        for(i = 0; i < SIZEII; i++) {
//                		printf("vetor[%d] = %d\n",i,V[i]);
	        if(V[i]%2 != 0) {
        	        if(a > SIZEI) {
              		printf("impar[%d] = %d\n",x,V[i]);
                                x++;
                        }
                        if(x == SIZEI) {
				x = 0;
			}
                        a++;
                 }
        }

	a = 1;
	x = 0;

	for(i = 0; i < SIZEII; i++) {
                if(V[i]%2 == 0) {
                	if(a > SIZEI) {
                	       	printf("par[%d] = %d\n",x,V[i]);
                                x++;
                        }
                        if(x == SIZEI) {
			x = 0;
				}
                                a++;
                        }
                 }
	return 0;
}
