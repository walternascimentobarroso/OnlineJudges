#include <stdio.h>
#include <string.h>

int main() {
    int e, i, len, value, j, l;
    char string[1001];
    scanf("%d", &e);
    for(i = 0; i < e; i++) {
		value=0;
        scanf("%s", string);
        len = strlen(string);
        for(j = 0; j < len; j++) {
			for(l = j; l < len; l++) {
				if(string[j] == '<' && string[l] == '>') {
					value++;
					string[j] = 0;
					string[l] = 0;
				}	
			}
        }
       printf("%d\n", value);
    }
    return 0;
}
