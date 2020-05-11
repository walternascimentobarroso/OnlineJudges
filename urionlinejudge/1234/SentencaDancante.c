#include <stdio.h>

int main() {
	char str[51];
	unsigned int i, mark=0;

	while(fgets(str, 51, stdin)!=NULL) {
		mark=0;
		for (i = 0; str[i] != '\0'; i++) {
			if ((str[i] >= 'a') && (str[i] <= 'z') ) {
				mark++;
				if (mark % 2 == 1) {
					str[i] -= 32;
				}      
			} else if ((str[i] >= 'A') && (str[i] <= 'Z') ) {
				mark++;
				if (mark % 2 == 0) {
					str[i] += 32;
				}
			}
		}
		printf("%s", str);
	}
	return 0;
}
