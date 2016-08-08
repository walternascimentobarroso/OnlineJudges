#include <stdio.h>
#include <vector>

#define MAXIMO 5

using namespace std;

typedef struct {
	int x, y, visitada;
} Local;

vector<vector <int> > labirinto(MAXIMO);
vector<vector <Local> > localizacao(MAXIMO);
int policiaGanha;

void backtracking(int i, int j);

int main() {
	int casos, i, j, k, e;
	scanf("%d", &casos);
	while(casos--) {
		for(j = 0; j < MAXIMO; j++) {
			labirinto[j].resize(MAXIMO);
			localizacao[j].resize(MAXIMO);
			for(k = 0; k < MAXIMO; k++) {
				scanf("%d", &e);
				labirinto[j][k] = e;
				localizacao[j][k].x = j;
				localizacao[j][k].y = k;
				localizacao[j][k].visitada = 0;
			}
		}
		policiaGanha = 0;
		backtracking(0, 0);
		(policiaGanha) ? printf("COPS\n") : printf("ROBBERS\n");
	}
	return 0;
}

void backtracking(int i, int j) {
	if(i >= 0 && i < MAXIMO && j >= 0 && j < MAXIMO && !policiaGanha) {
		localizacao[i][j].visitada = 1;
		if(i == MAXIMO-1 && j == MAXIMO-1) {
			policiaGanha = 1;
		} else {
			if(i + 1 < 5 && labirinto[i + 1][j] == 0 && !localizacao[i + 1][j].visitada)
				backtracking(i + 1, j);
			if(i - 1 >= 0 && labirinto[i - 1][j] == 0 && !localizacao[i - 1][j].visitada)
				backtracking(i - 1, j);
			if(j + 1 < 5 && labirinto[i][j + 1] == 0 && !localizacao[i][j + 1].visitada)
				backtracking(i, j + 1);
			if(j - 1 >= 0 && labirinto[i][j - 1] == 0 && !localizacao[i][j - 1].visitada)
				backtracking(i, j - 1);
		}
	}
}
