#include <stdio.h>

int cover_hall(int list[], int k, int d, int t) {
    int i = 0, planks = 0;

    while(i < k && t > 0) {
        if(list[i] + list[k] == d) {
            i++; k--; t--;
            planks += 2;
        } else if(list[k] == d) {
            k--; t--;
            planks += 1;
        } else if(list[i] == d) {
            i++; t--;
            planks += 1;
        } else if(list[i] + list[k] > d) {
            k--;
        } else {
            i++;
        }

    }

    if(i == k && t > 0 && list[k] == d) {
        t--;
        planks += 1;
    }

    if(t > 0) return -1;
    else return planks;
}

void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}


int main() {
    unsigned int M, N, K, H, V, L, i;

    while(scanf("%d %d", &M, &N) && M != 0 && N != 0) {
		scanf("%d %d", &L, &K);
        int planks[K];

        for (i = 0; i < K; i++)
			scanf("%d", &planks[i]);

        shellSort(planks, K);

        if(M*100 % L == 0) 
			H = cover_hall(planks, K - 1, N, M*100/L);
		else 
			H = -1;

        if(N*100 % L == 0) 
			V = cover_hall(planks, K - 1, M, N*100/L);
        else 
			V = -1;

        if(H == -1 && V == -1)
            printf("impossivel\n");
        else if(H == -1)
            printf("%d\n", V);
        else if(V == -1)
            printf("%d\n", H);
        else
			(H > V) ? printf("%d\n", V) : printf("%d\n", H);
    }
    return 0;
}
