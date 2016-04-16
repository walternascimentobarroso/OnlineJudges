#include <stdio.h>

int main() { 
	int a,b,i,j=0,cont=0,l;
	scanf("%i",&a);
	scanf("%i",&b);
	l = a*b;
	char v[a][b],C;
	while(getchar()!='\n');
	for (i = 0; i < b; ++i) {
		scanf("%s",v[i]);
		getchar();
	}
	i=0;
	while(1) {
		if (v[i][j]=='>' || (v[i][j]=='.' && C=='>')) {
			C='>';
			j++;
			cont++;
		} else if (v[i][j]=='<' || (v[i][j]=='.' && C=='<')) {   
			C='<';
			j--;
			cont++;
		} else if (v[i][j]=='v' || (v[i][j]=='.' && C=='v')) {   
			C='v';
			i++;
			cont++;
		} else if (v[i][j]=='^' || (v[i][j]=='.' && C=='^')) {   
			C='^';
			i--;
			cont++;
		} else if (v[i][j]=='*') {
			printf("*\n");
			break;
		}
		if (cont>=l) {
			printf("!\n");
			break;
		}
	}

	return 0;
}
