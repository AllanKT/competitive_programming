#include<bits/stdc++.h>
#define fori(a, l, f) for(int a = l; a<f; ++a)
#define MAX 100004
using namespace std;
using lli = long long int;

int main(){
    lli n, x[MAX], q, m;
    cin>>n;
    fori(i, 0, n) cin>>x[i];
    cin>>q;
    sort(x, x+n);
    while(q--){
        cin>>m;
        cout<<upper_bound(x,x+n,m)-x<<"\n";
    }
    return 0;
}