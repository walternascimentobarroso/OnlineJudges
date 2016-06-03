#include <stdio.h>

int main() {
	int e, total = 0, i;
	char nome[50];
	while(scanf("%[^\n]",nome) !=  EOF) {
		scanf("%d", &e);
		total += e;
		i++;
	}
	printf("%.1lf\n", (float)total/i);
	return 0;
}
