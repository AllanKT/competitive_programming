#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

vector<int> graph1[MAX], graph2[MAX];
bool visited1[MAX], visited2[MAX], ans = true;

void dfs2(int s){
    visited2[s] = false;
    for(auto &w: graph2[s]){
        if(!visited2[w]) ans = false;
        if(visited2[w]) dfs2(w);
    }
}

void dfs1(int s){
    visited1[s] = false;
    for(auto &w: graph1[s]){
        if(visited1[w]) dfs1(w);
    }
}

int main(){
    int n, m, comp_conexos = 0;
    cin>>n>>m;
    for(int i=1;i<=m; i++){
        int a, b;
        cin>>a>>b;
        graph2[a].push_back(b);
        graph1[a].push_back(b);
        graph1[b].push_back(a);
    }
    memset(visited1, true, sizeof visited1);
    for(int i=1; i<=n; i++){
        memset(visited2, true, sizeof visited2);
        if(visited2[i]) dfs2(i);
        if(visited1[i]){
            dfs1(i);
            comp_conexos++;
        }
    }
    if(comp_conexos>1 || !ans) cout<<"no\n";
    else cout<<"yes\n";
}
