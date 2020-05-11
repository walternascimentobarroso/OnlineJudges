#include <stdio.h>
#include <stdlib.h>

int cmp (const void *x, const void *y) {
	return (*(int *)y - *(int *)x);
}


int main() {
    int n, i, j, totalG = 0, newG;

    scanf("%d", &n);
 
    char str[n][n];
    int gA[n], gB[n];
 
    for (i = 0; i < n; i++) {
		gB[i] = -1;
		gA[i] = 0;
		scanf("%s", str[i]);
    }

	for (i = 0; i < n; i++) {
		if (gB[i] < 0) {
			gB[i] = totalG;
			gA[totalG]++;
			totalG++;
			newG = 1;
		} else {
			newG = 0;
		}

		for (j = i + 1; j < n; j++) {
			if(str[i][j] != str[j][i]){
		        printf("-1\n");
			    return 0;
			}
			if (str[i][j] == 'S') {
				if (newG == 1) {
					if (gB[j] < 0) {
						gB[j] = gB[i];
						gA[gB[j]]++;
					}
				} else if (gB[i] != gB[j]) {
				    printf("-1\n");
					return 0;
				}
			} else if (gB[i] == gB[j]) {
		        printf("-1\n");
			    return 0;
			}
		}
	}

	qsort(gA, totalG, sizeof (int), cmp);
    printf("%d\n", totalG);
    for (i = 0; i < totalG-1; i++)
        printf("%d ", gA[i]);
    printf("%d\n", gA[i]);
    return 0;
}
