#include <stdio.h>

int main() {
	int e, i;
	scanf("%d", &e);
	int v[e];
	
	for(i = 0; i < e; i++) {
		scanf("%d", &v[i]);
	}
	for(i = 0; i < e; i++) {
		if(v[i] < 2015 && v[i] >= 0) {
			printf("%d D.C.\n", 2015-v[i]);
		} else {
			printf("%d A.C.\n", v[i]-2014);
		}
	}
	return 0;
}
