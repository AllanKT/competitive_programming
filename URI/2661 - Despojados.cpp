#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, cont=0;
    scanf("%lld", &n);
    for(ll i=2; i*i<=n; i++){
        if(n%i==0) cont++;
        while(n%i==0) n/=i;
    }
    if(n!=1) cont++;
    ll ans = pow(2, cont) - cont - 1;
    printf("%lld\n", ans);
    return 0;
}
