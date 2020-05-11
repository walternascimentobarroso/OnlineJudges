#include <stdio.h>

long long int fat(int n) {
    if (n) return n*fat(n-1);
    else return 1;
}

int main() {
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF) {
        printf("%lld\n", fat(a) + fat(b));
    }
    return 0;
}
