#include <bits/stdc++.h>
using namespace std;

vector<int> graph[100];
int dfs_low[1300];
int dfs_counter;
int parents[1300];
int pontes;
int dfs_num[1300];

int min(int a, int b){
    if(a<b) return a;
    else return b;
}

void dfs(int u){
    dfs_num[u] = dfs_low[u] =++dfs_counter;
    for(auto &v: graph[u]){
        if(dfs_num[v]==0){
            parents[v]=u;
            dfs(v);
            if(dfs_low[v]>dfs_num[u]){
                pontes++;
            }
            dfs_low[u] = min(dfs_low[u], dfs_low[v]);
        }
        else if(parents[u]!=v){
            dfs_low[u]=min(dfs_low[u], dfs_num[v]);
        }
    }
}
void zera(){
    for(int i=0; i<1300; i++){
        parents[i]=0;
        dfs_low[i]=0;
        dfs_num[i]=0;
    }
    pontes = 0;
    dfs_counter=0;

    for(int i=0; i<100; i++){
        graph[i].clear();
    }


}

int main() {
    int c, p;
    while(scanf("%d %d", &c, &p)==2){
    int a, b;
        zera();
        for(int i=1; i<=p; i++){
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    dfs(1);
    cout<<pontes<<endl;
    }

    return 0;
}
