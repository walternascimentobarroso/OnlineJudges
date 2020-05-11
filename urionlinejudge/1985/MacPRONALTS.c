#include <stdio.h>

int main() {
	int e, i;
	float total=0.0;
	
	scanf("%d", &e);
	int v[e][2];
	for(i = 0; i < e; i++) {
		scanf("%d %d", &v[i][0], &v[i][1]);
		if(v[i][0] == 1001) total += v[i][1] * 1.50;
		if(v[i][0] == 1002) total += v[i][1] * 2.50;
		if(v[i][0] == 1003) total += v[i][1] * 3.50;
		if(v[i][0] == 1004) total += v[i][1] * 4.50;
		if(v[i][0] == 1005) total += v[i][1] * 5.50;
	}

	printf("%.2f\n", total);
	
	return 0;
}
