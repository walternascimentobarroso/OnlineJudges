#include <stdio.h>

int main() {
    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);
    total = a+b+c;
    if(total >= 24)
        total -= 24;
    if(total < 0) {
        total *= -1;
        total = 24-total;
    }
    printf("%d\n", total);

    return 0;
}
