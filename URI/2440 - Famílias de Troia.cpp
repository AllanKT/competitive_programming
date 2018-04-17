#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

vector<int> graph[MAX];
bool visited[MAX];
int k;

void dfs(int source){
    visited[source] = true;
    for(int w: graph[source]){
        if(!visited[w]) dfs(w);
    }
}

int main(){
    int n, m;
    memset(visited, false, sizeof(visited));
    for(int i=0; i<MAX; i++)
        graph[i].clear();
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            k++;
        }
    }

    cout<<k<<endl;

    return 0;
}
