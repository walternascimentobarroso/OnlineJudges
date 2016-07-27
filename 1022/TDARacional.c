#include <stdio.h>

int mdc(int a, int b);

int main() {
	int e, N1, D1, N2, D2, a, b, m;
	char op;
	scanf("%d", &e);
	while(e--) {
		scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);
		if(op == '+') {
			a = N1*D2 + N2*D1;
			b = D1*D2;
		} else if(op == '-') {
			a = N1*D2 - N2*D1;
			b = D1*D2;
		} else if(op == '*') {
			a = N1*N2;
			b = D1*D2;
		} else if(op == '/') {
			a = N1*D2;
			b = N2*D1;
		}
		m = mdc(a, b);
		if(m<0) m *= -1;
		if(b<0 || a==0)
			printf("%d/%d = %d/%d\n", a, b, a, b);
		else
			printf("%d/%d = %d/%d\n", a, b, a/m, b/m);
	}
	return 0;
}

int mdc(int a, int b) {
	if(b == 0)
		return a;
	else
		return mdc(b, a % b);
}
