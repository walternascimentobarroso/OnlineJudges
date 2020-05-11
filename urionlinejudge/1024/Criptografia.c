#include <stdio.h>

int main() {
	unsigned int e, i, len, j, met, total;
	unsigned char str[1001], temp[1001];
	scanf("%d", &e);
	getchar();
	while(e--) {
		fgets(str, 1001, stdin);
		len=0; j=0; met=0; total=0;
		for(i = 0; str[i] != '\0'; i++) {
			if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
				str[i] += 3;
			len++;
		}
		for(i = len-2; i > 0; i--) {
			temp[j++] = str[i];
		}
		temp[j++] = str[0];
		temp[j] = '\0';

		met = (len%2==0) ? (int)len/2-1 : (int)len/2;
		for(i = met; temp[i] != '\0'; i++) {
			temp[i] -= 1;
		}

		printf("%s\n", temp);
	}
	return 0;
}
