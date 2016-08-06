#include <stdio.h>
#include <map>

using namespace std;

int main (){
	map<int, int> m;
	map<int, int>::iterator it;
	int caso = 1, n, x, y, soma, i, cont;
	float media;

	while (scanf("%d", &n) && n) {
		if (caso > 1) printf("\n");

		soma = 0;
		media = 0;
		cont = 0;
		m.clear();

 		for (i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			soma += x;
			media += y;
			m[y/x] += x;
		}

		printf("Cidade# %d:\n", caso++);
		for (it = m.begin(); it != m.end(); it++) {
			printf("%d-%d", it->second, it->first);
			if (++it != m.end()) printf(" ");
			it--;
		}
		printf("\n");
		printf("Consumo medio: %.2f m3.\n", float (media/soma)-0.0049999999);
	}
	return 0;
}
