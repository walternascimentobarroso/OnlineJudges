#include <stdio.h>
#include <string.h>
 
int main() {
	char x[1000], t[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./\0"};
	int tamt = strlen(t), tamx, i, j;

	while(gets(x) ) {
		tamx = strlen(x);
		for(i = 0; i < tamx; i++){
			for(j = 0; j < tamt; j++){
				if(x[i] == t[j]){
					x[i] = t[j-1];
					break;
				}
			}
		}
		printf("%s\n", x);
	}

	return 0;
}
