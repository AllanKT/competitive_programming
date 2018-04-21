#include<bits/stdc++.h>
#define MAX 10004
using namespace std;

int main(){
    int n, m, num[MAX], ans = 0;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>num[i];
    for(int i=0;i<n-1;i++){
        ans += abs(m-num[i]);
        int aux = (m-num[i]);
        num[i] += aux;
        num[i+1] += aux;
    }
    cout<<ans<<endl;
    return 0;
}
