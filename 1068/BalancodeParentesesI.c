#include <stdio.h>
#include <string.h>

int main() {
    int len, i, countA, countB;
    char v[10001];
    while(scanf("%s", v) != EOF) {
		countA=0;
		countB=0;
        len = strlen(v);
        for(i = 0; i < len; i++) {
			if(v[i] == '(') {
				countA++;
			}
			if(v[i] == ')') {
				countB++;
			}
			if(v[i] == ')' && countA < countB) {
                break;
            }
        }
		if(countA == countB)
			printf("correct\n");
		else
			printf("incorrect\n");
    }

}
