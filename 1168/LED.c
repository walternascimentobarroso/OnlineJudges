#include <stdio.h>
#include <string.h>

int main() {
    int e, i, count, maxStrg, j;
    char n[10001];
    
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        scanf("%s", n);
        maxStrg = strlen(n);
        count = 0;
        for(j = 0; j < maxStrg; j++) {
            if(n[j] == '1') {
                count += 2;
            } else if(n[j] == '2' || n[j] == '3' || n[j] == '5'){
                count += 5;
            } else if(n[j] == '4') {
                count += 4;
            } else if(n[j] == '6' || n[j] == '9' || n[j] == '0') {
                count += 6;
            } else if(n[j] == '7') {
                count += 3;
            } else if(n[j] == '8') {
                count += 7;
            }
        }
        printf("%d leds\n", count);
    }
    

    return 0;
}
