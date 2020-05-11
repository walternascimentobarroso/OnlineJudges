#include <stdio.h>
#include <list>
#include <stack>

using namespace std;

list<int> *adj;
void Criagrafo(int V);
void addAresta(int v1, int v2);
int dfs(int v, int n);
int ciclo(int vertices);

int main() {
	int t, n, m, a, b, i;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		Criagrafo(n);
		for(i = 0; i < m; i++) {
			scanf("%d %d", &a, &b);
			addAresta(a-1, b-1);
		}
		if(ciclo(n))
			printf("SIM\n");
		else
			printf("NAO\n");
	}
	return 0;
}

void Criagrafo(int V) {
	adj = new list<int>[V];
}

void addAresta(int v1, int v2) {
	adj[v1].push_back(v2);
}

int dfs(int v, int n) {
	stack<int> pilha;
	int visitados[n], pilha_rec[n], i, achou_vizinho;

	for(i = 0; i < n; i++)
		visitados[i] = pilha_rec[i] = 0;

	while(1) {
		achou_vizinho = 0;
		list<int>::iterator it;

		if(!visitados[v]) {
			pilha.push(v);
			visitados[v] = pilha_rec[v] = 1;
		}
		
		for(it = adj[v].begin(); it != adj[v].end(); it++) {
			if(pilha_rec[*it]) {
				return 1;
			} else if(!visitados[*it]) {
				achou_vizinho = 1;
				break;
			}
		}

		if(!achou_vizinho) {
			pilha_rec[pilha.top()] = 0;
			pilha.pop();
			if(pilha.empty()) break;
			v = pilha.top();
		} else {
			v = *it;
		}
	}
	return 0;
}

int ciclo(int vertices) {
	int i;
	for(i = 0; i < vertices; i++)
		if(dfs(i, vertices)) return 1;
	return 0;
}
