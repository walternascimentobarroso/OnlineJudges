#include <stdio.h>

int main() {
	unsigned int e, i, cifra;
	unsigned char str[51];
	scanf("%d", &e);
	while(e--) {
		scanf("%s", str);
		scanf("%d", &cifra);
		for(i = 0; str[i] != '\0'; i++) {
			str[i] -= cifra;
			if(str[i] < 'A')
				str[i] += 26;
		}
		printf("%s\n", str);
	}
	return 0;
}
