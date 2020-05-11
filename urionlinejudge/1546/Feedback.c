#include <stdio.h>

int main() {
	int t, e, i;
	char n[4][9] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
	scanf("%d", &t);
	for(; t > 0; t--) {
		scanf("%d", &e);
		int v[e];
		for(i = 0; i < e; i++) {
			scanf("%d", &v[i]);
			printf("%s\n", n[v[i] - 1]);
		}
	}
	return 0;
}
