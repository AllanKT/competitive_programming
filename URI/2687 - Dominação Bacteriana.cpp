#include<bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;

int Q, L, grid[20][20];
int cont;
ii mov[4] = {{0,1},{0,-1},{1,0},{-1,0}};
bool visited[20][20];

int dfs(int i, int j){
    visited[i][j] = true;
    grid[i][j] = -2;
    for(auto &w: mov){
        int a = i + w.first;
        int b = j + w.second;
        if(!visited[a][b] && grid[a][b] != -1 && grid[a][b] != 1) dfs(a, b);
    }
}

int main(){
    cin>>Q;
    while(Q--){
        cont = 0;
        memset(grid, -1, sizeof grid);
        memset(visited, false, sizeof visited);
        cin>>L;
        for(int i=2;i<L+2;i++){
            for(int j=2; j<L+2; j++){
                cin>>grid[i][j];
            }
        }
        for(int i=2;i<L+2;i++){
            for(int j=2; j<L+2; j++){
                if(grid[i][j] == 0 && (i==2 || i==L+1 || j==2 || j==L+1)){
                    dfs(i, j);
                }
            }
        }
        for(int i=2;i<L+2;i++){
            for(int j=2; j<L+2; j++){
                if(grid[i][j] != -2) cont++;
            }
        }
        printf("%.2f\n", cont/2.0);
    }
    return 0;
}
