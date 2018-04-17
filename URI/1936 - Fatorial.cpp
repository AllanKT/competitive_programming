#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int N, i;
int f[MAX];
int dp[MAX][MAX];

int fat(int n){
    if(n==1 || n==0) return 1;
    else return n*fat(n-1);
}

int qtd(int n, int rc){
    if(rc==0 || n==i) dp[n][rc] = 0;
    else if(f[n]>rc) dp[n][rc] =  qtd(n+1, rc);
    else if(f[n]<=rc) dp[n][rc] = 1 + qtd(n, rc-f[n]);
    return dp[n][rc];
}

int main(){
    cin>>N;
    while(fat(i)<=N){
        f[i]=fat(i);
        i++;
    }
    for(int j=0; j<i; j++){
        for(int k=0; k<i; k++){
            if(f[j]>f[k]){
                int aux = f[j];
                f[j] = f[k];
                f[k] = aux;
            }
        }
    }
    cout<<qtd(0, N)<<endl;
    return 0;
}
