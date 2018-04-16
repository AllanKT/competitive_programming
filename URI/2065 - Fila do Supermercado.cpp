#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, clientes[10005], caixa[10005];
	priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > fila;

	scanf("%d %d", &n, &m);

	for(int i=0; i<n; i++){
		int p;
		scanf("%d", &caixa[i]);
		fila.push(make_pair(0, i));
	}

	for(int i=0; i<m; i++) scanf("%d", &clientes[i]);

	int ans = 0, tempo = 0;
	for(int i=0; i<m; i++){
		auto a = fila.top();
		fila.pop();
		fila.push(make_pair(caixa[a.second]*clientes[i]+a.first, a.second));
		ans = max(ans, caixa[a.second]*clientes[i]+a.first);
	}
	printf("%d\n", ans);

	return 0;
}
