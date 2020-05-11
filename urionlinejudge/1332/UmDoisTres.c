#include <stdio.h>
#include <string.h>

int main() {
    int e, i, j, maxS, count, on, tw;
    char n[6], o[] = "one", t[] = "two";
    scanf("%d", &e);
    for(i = 0; i < e; i++) {
        scanf("%s", n);
        maxS = strlen(n);
        if(maxS == 5) {
            printf("3\n");
            continue;
        }
        on = 0;
        tw = 0;
        for(j = 0; j < maxS; j++) {
            if(n[j] == o[j]) {
                on++;
            } else if(n[j] == t[j]) {
                tw++;
            }
        }
        if(on > tw) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    return 0;
}
