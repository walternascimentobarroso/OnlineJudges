#include <stdio.h>

int mdc(a, b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main() {
    int e, a, b;
    scanf("%d", &e);
    while(e--) {
        scanf("%d %d", &a, &b);
        printf("%d\n",(a>b)? mdc(a, b): mdc(b,a));
    }
    return 0;
}
