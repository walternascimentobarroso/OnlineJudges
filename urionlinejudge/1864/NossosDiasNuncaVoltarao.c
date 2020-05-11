#include <stdio.h>
#include <string.h>

int main() {
	int e;
	char *s = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	scanf("%d", &e);
	char f[e];

	strncpy(f, s, e);
	f[e] = '\0';

	printf("%s\n", f);

	return 0;
}
