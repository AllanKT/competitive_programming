#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int t, c;
int values[MAX];
int peso[MAX];
int DP[MAX][MAX];

int pack(int n, int rc){
    if(n==t || rc==0) DP[n][rc] = 0;
    else if(peso[n]>rc) DP[n][rc] = pack(n+1, rc);
    else if(DP[n][rc]!=-1) return DP[n][rc];
    else DP[n][rc] = max(values[n]+pack(n+1, rc-peso[n]), pack(n+1, rc));
    return DP[n][rc];
}

int main(){
    while(scanf("%d", &t)!=0){
        if(t==0)break;
        cin>>c;
        memset(DP, -1, sizeof(DP));
        for(int i=0; i<t; i++){
            cin>>values[i]>>peso[i];
        }
        cout<<pack(0, c)<<" min."<<endl;
    }
        return 0;
}
