#include<bits/stdc++.h>
#define MAX 100005
#define oo 1<<30
using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

ll n, m;
ii f[MAX];
map<ii, ll> ponto;

ll bb(ll n, ll l, ll h){
    ll m = (l+h)/2;
    if(f[m].first<=n && f[m].second>=n) return ponto[f[m]];
    if(f[m].first>n) return bb(n, l, m-1);
    else return bb(n, m+1, h);
}

int main(){
    cin>>n>>m;
    f[0] = ii(-1, -1);
    for(int i=1; i<=n; i++){
        if(i==n) f[i] = ii(f[i-1].second+1, oo);
        else{
            int a;
            cin>>a;
            f[i] = ii(f[i-1].second+1, a-1);
        }
    }
    for(int i=1; i<=n; i++){
        if(f[i].second != -1){
            ll a;
            cin>>a;
            ponto.insert(make_pair(f[i], a));
        }
    }
    while(m--){
        int a;
        cin>>a;
        cout<<bb(a,1,n)<<" ";
    }
    cout<<endl;
    return 0;
}
