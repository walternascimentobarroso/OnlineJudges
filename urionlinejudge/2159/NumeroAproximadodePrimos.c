#include <stdio.h>
#include <math.h>

int main() {
    int e;
    double min, max;
    scanf("%d", &e);
    min = e/log(e);
    max = 1.25506*e/log(e);
    printf("%.1lF %.1lF\n", min, max);
    return 0;
}
