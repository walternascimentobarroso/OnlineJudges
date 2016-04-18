#include <stdio.h>
#include <string.h>

int main() {
	int e, i, soma;
	scanf("%d", &e);
	char v[e][4][10];
	int vi[e][2];
	
	for(i = 0; i < e; i++) {
		scanf("%s %s %s %s", v[i][0], v[i][1], v[i][2], v[i][3]);
		scanf("%d %d", &vi[i][0], &vi[i][1]);
	}
	
	for(i = 0; i < e; i++) {
		soma = vi[i][0] + vi[i][1];
		if(soma%2 == 0 ) {
			if(strcmp(v[i][1], "PAR") == 0) {
				printf("%s\n", v[i][0]);
			} else {
				printf("%s\n", v[i][2]);
			}
		} else {
			if(strcmp(v[i][1], "IMPAR") == 0) {
				printf("%s\n", v[i][0]);
			} else {
				printf("%s\n", v[i][2]);
			}
		}
		
	}
	return 0;
}
