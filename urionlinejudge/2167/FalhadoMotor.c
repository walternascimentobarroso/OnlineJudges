#include <stdio.h>

int main() {
    int n, i, ind = 0;
    scanf("%d", &n);
    int v[n];
    scanf("%d", &v[0]);
    for(i = 1; i < n; i++) {
        scanf("%d", &v[i]);
        if(v[i] < v[i-1] && ind == 0)
            ind = i+1;
    }

    printf("%d\n", ind);

    return 0;
}
