#include <stdio.h>
#include <ctype.h>

int main() {
	int e, i, pri, seg;
	scanf("%d", &e);
	char v[e][3], c;
	for(i = 0; i < e; i++) {
		scanf("%s", v[i]);
	}
	for(i = 0; i < e; i++) {
		pri = v[i][0] - 48;
		c = v[i][1];
		seg = v[i][2] - 48;
		if(pri == seg) {
			printf("%d\n", pri*seg);
		} else if(islower(c)) {
			printf("%d\n", pri+seg);
		} else {
			printf("%d\n", seg-pri);
		}
	}
	return 0;
}
