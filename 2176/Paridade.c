#include <stdio.h>

int main() {
    char e[101];
    int i, count=0;
    scanf("%[^\n]", e);
    for(i = 0; e[i] != '\0'; i++) {
        if(e[i] == '1')
            count++;
    }
    if(count%2==0)
        printf("%s0\n", e);
    else
        printf("%s1\n", e);
    return 0;
}
