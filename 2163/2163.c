#include <stdio.h>

int main() {
	int x, y, i, j;
	scanf("%d", &x);
	scanf("%d", &y);
	int v[x][y];
	for(i = 0; i < x; i++) {
		for(j = 0; j < y; j++) {
			scanf("%d", &v[i][j]);
		}
	}
	int endx = 0, endy = 0;
	for(i = 0; i < x; i++) {
		for(j = 0; j < y; j++) {
			if(v[i][j] == 42) {
				if(i+1 > x - 1 || 
				   j+1 > y - 1 ||
				   i-1 < 0 ||
				   j-1 < 0) {
					continue;
				} else if(v[i-1][j] == 7 && 
				   v[i][j-1] == 7 && 
				   v[i-1][j-1] == 7 && 
				   v[i-1][j+1] == 7 &&
				   v[i+1][j-1] == 7 &&
				   v[i+1][j+1] == 7 &&
				   v[i][j+1] == 7 &&
				   v[i+1][j] == 7){
					endx = i+1;
					endy = j+1;
				}
			}
		}
	}
	printf("%d %d\n", endx, endy);
	return 0;
}
