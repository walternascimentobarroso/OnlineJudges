#include <stdio.h>

int main() {
	int e, i, pri, seg;

	while(scanf("%d", &e) && e != 0) {
		int v[e][2];
		pri = 0; 
		seg = 0;
		for(i = 0; i < e; i++) {
			scanf("%d %d", &v[i][0], &v[i][1]);
			if(v[i][0] > v[i][1]) {
				pri++;
			} else if(v[i][0] < v[i][1]) {
				seg++;
			}
		}
		printf("%d %d\n", pri, seg);
	}
	return 0;
}
