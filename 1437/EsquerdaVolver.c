#include <stdio.h>

int main(){
	int t, i;

	while(scanf("%d", &t) && t != 0) {
		char pos = 'N', n[1000];

		fflush(stdin);
		scanf("%s", n);
		fflush(stdin);

		for(i = 0; i < t; i++) {   
			if(pos == 'N') {
				if(n[i] == 'D') {
					pos = 'L';
				}
				if(n[i] == 'E') {
					pos = 'O';
				}
			} else if(pos == 'L') {
				if(n[i] == 'D') {
					pos = 'S';
				}
				if(n[i] == 'E') {
					pos = 'N';
				}
			} else if(pos == 'S') {
				if(n[i] == 'D') {
					pos = 'O';
				}
				if(n[i] == 'E') {
					pos = 'L';
				}
			} else if(pos == 'O') {
				if(n[i] == 'D') {
					pos = 'N';
				}
				if(n[i] == 'E') {
					pos = 'S';
				}
			}         
		}
		printf("%c\n", pos);
	}

	return 0;
}
