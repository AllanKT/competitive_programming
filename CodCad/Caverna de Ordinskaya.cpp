#include<bits/stdc++.h>
#define MAX 100005
#define oo 1<<30
using namespace std;
using ll = long long;

int main(){
    ll n, m, a, low = oo, more = 0, aux = 0, ans = 0;
    cin>>n>>m;
    for(ll i=0; i<n; i++){
        cin>>a;
        low = min(a, m-a);
        more = max(a, m-a);
        if(low >= aux){
            aux = low;
            ans += low;
        }
        else if(low < aux && more >= aux){
            aux = more;
            ans += more;
        }
        else if(low < aux && more < aux){
            cout<<"-1\n";
            return 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
