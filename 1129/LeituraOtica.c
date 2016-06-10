#include <stdio.h>

int main() {
	int e, v[5], i, j, count, valor;
	while(scanf("%d", &e) && e != 0) {
		for(i = 0; i < e; i++) {
			count = 0;
			valor = -1;
			scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);
			for(j = 0; j < 5; j++) {
				if(v[j] <= 127){
					count++;
					valor = j+1;
				}
			}
			if(count == 1) {
				if(valor == 5)
					printf("E\n");	
				else if(valor == 4)
					printf("D\n");	
				else if(valor == 3)
					printf("C\n");	
				else if(valor == 2)
					printf("B\n");
				else if(valor == 1)
					printf("A\n");
				else
					printf("*\n");
			} else {
				printf("*\n");	
			}
		}
		
	}
	return 0;
}
