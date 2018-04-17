#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int destruction[MAX];
int weight[MAX];
int dp[MAX][MAX];
int K, R, N;

int canhao(int n, int rc){
    if(n==N || rc==0) dp[n][rc]=0;
    else if(weight[n]>rc) dp[n][rc]=canhao(n+1, rc);
    else if(dp[n][rc]!=-1) return dp[n][rc];
    else dp[n][rc] = max(destruction[n]+canhao(n+1, rc-weight[n]), canhao(n+1, rc));
    return dp[n][rc];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        cin>>N;
        for(int i=0; i<N; i++)
            cin>>destruction[i]>>weight[i];
        cin>>K>>R;
        canhao(0, K)>=R ? cout<<"Missao completada com sucesso"<<endl : cout<<"Falha na missao"<<endl;
    }
    return 0;
}
