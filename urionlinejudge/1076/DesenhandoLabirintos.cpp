#include <iostream>
#include <map>
#include <set>

using namespace std;

typedef map<int,set<int> > Outermap;

Outermap meumap;

int contador;
bool* visitado;

void dfs(int u) {
	contador++;
	//cout << "visitando " << u << " contador= " << contador << endl; 
	visitado[u] = true;
	set<int>::iterator it;
	set<int> adjacentes = meumap[u];
	for(it = adjacentes.begin(); it != adjacentes.end(); it++) {
		int v = *it;
		if(visitado[v] == false) {
			dfs(v);
			contador++;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int inicio;
		cin >> inicio;
		int n,m;
		cin >> n >> m;
		contador = 0;
		visitado = new bool[n];
		//visitado = (bool*) malloc(sizeof(bool)*n);
		meumap.clear();

		while(m--) {
			int u,v;
			cin >> u >> v;
			meumap[u].insert(v);
			meumap[v].insert(u);
		}

		dfs(inicio);
		cout << contador-1 << endl;
	}
	return 0;
}
