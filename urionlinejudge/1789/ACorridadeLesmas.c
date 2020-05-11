#include <stdio.h>

int main() {
	int e, i, m;
	while (scanf("%d", &e) != EOF) {
		int v[e];
		m=0;

		for(i = 0; i < e; i++) {
			scanf("%d", &v[i]);
			if(m <= v[i]) {
				m = v[i];
			}
		}
		if(m < 10) {
			printf("1\n");
		} else if(m >= 10 && m < 20) {
			printf("2\n");
		} else {
			printf("3\n");
		}
	}
	return 0;

}
