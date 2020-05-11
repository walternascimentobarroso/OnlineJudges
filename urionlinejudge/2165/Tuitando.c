#include <stdio.h>

int main() {
    int i;
    char str[501];
    fgets(str, 501, stdin);
    for(i = 0; str[i] != '\0'; i++);
    
    printf((i-1 > 140) ? "MUTE\n" : "TWEET\n");

    return 0;
}
