#include <stdio.h>

int main() {
	int t, b, i, j;
	int v[2][3], p[2];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &b);
		for(i=0; i < 2; i++) {
			for(j=0; j < 3; j++)
				scanf("%d", &v[i][j]);
			if(v[i][2]%2==0)
				p[i] = ((v[i][0]+v[i][1])/2)+b;
			else
				p[i] = ((v[i][0]+v[i][1])/2);
		}

		if(p[0] > p[1])
			printf("Dabriel\n");
		else if(p[0] < p[1])
			printf("Guarte\n");
		else 
			printf("Empate\n");

	}
	return 0;
}
