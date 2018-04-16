#include<bits/stdc++.h>
#define MAX 1000000
#define oo (1<<30)
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)
using namespace std;

using ii = pair<int, int>;

typedef struct ponto {
    string nome;
    int id;
} ponto;

vector<int> graph[MAX];
int dist[MAX], n, m;
ponto x[MAX];

int bfs(int source, int target){
    memset(dist, -1, sizeof dist);
    queue<int> q;
    dist[source] = 0;
    q.push(source);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto &w: graph[v]){
            if(dist[w]==-1){
                dist[w] = dist[v]+1;
                q.push(w);
            }
        }
    }
    return dist[target];
}

int main(){
    x[0].id = 0;
    x[0].nome = "Entrada";
    x[1].id = 1;
    x[1].nome = "Saida";
    x[2].id = 2;
    x[2].nome = "*";
    int h1, h2, tam = 3;

    cin>>n>>m;
    fori(i, 0, m){
        bool flag1 = false, flag2 = false;
        string a, b;
        cin>>a>>b;
        fori(i, 0, n){
            if(x[i].nome == a){
                h1 = x[i].id;
                flag1 = true;
            }
            if(x[i].nome == b){
                h2 = x[i].id;
                flag2 = true;
            }
        }
        if(!flag1){
            h1 = tam;
            x[tam].id = tam;
            x[tam++].nome = a;
        }
        if(!flag2){
            h2 = tam;
            x[tam].id = tam;
            x[tam++].nome = b;

        }
            graph[h1].push_back(h2);
            graph[h2].push_back(h1);
    }
    int start = bfs(0, 2);
    int close = bfs(2, 1);
    cout<<start+close<<endl;
    return 0;
}
