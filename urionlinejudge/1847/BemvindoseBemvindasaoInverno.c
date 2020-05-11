#include <stdio.h>

#define SIZE 3

int main() {
	int i, v[SIZE], dp, ds;
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
	
	dp = v[0] - v[1];
	ds = v[1] - v[2];

	if(v[0] > v[1] && v[1] <= v[2]) {
		printf(":)\n");
	} else if(v[0] < v[1] && v[1] >= v[2]) {
		printf(":(\n");
	} else 	if(v[0] < v[1] && v[1] < v[2] && dp < ds) {
		printf(":(\n");
	} else if(v[0] < v[1] && v[1] < v[2] && ds <= dp) {
		printf(":)\n");
	} else if(v[0] > v[1] && v[1] > v[2] && dp > ds) {
		printf(":)\n");
	} else if(v[0] > v[1] && v[1] > v[2] && dp <= ds) {
		printf(":(\n");
	} else if(v[0] == v[1] && v[1] < v[2]) {
		printf(":)\n");
	} else {
		printf(":(\n");
	}
	return 0;
}
