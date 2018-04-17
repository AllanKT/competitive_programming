#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

vector<int> graph[MAX];
bool visited[MAX];

void dfs(int n){
    visited[n] = true;
    for(auto &w: graph[n]){
        if(not visited[w]) dfs(w);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int j=1; j<=t; j++){
        for(int i=1; i<=MAX; i++)
            graph[i].clear();
        memset(visited, false, sizeof(visited));
        int n, m, c=-1;
        scanf("%d %d", &n, &m);
        for(int i=1; i<=m; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        for(int i=1; i<=n; i++){
            if(not visited[i]){
                dfs(i);
                c++;
            }
        }
        if(c==0)  printf("Caso #%d: a promessa foi cumprida\n", j);
        else printf("Caso #%d: ainda falta(m) %d estrada(s)\n", j, c);
    }
    return 0;
}
