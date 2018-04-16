#include<bits/stdc++.h>
#define ll long long
#define fori(a, l, f) for(ll a=l; a<f; ++a)
using namespace std;

typedef struct{
    ll num[110];
}cards;

int main(){
    ll N;
    while(cin>>N){
        ll M, L, Cm, Cl, A;
        cards deckM[110], deckL[110];
        cin>>M>>L;
        fori(i, 1, M+1){ fori(j, 1, N+1) cin>>deckM[i].num[j]; }
        fori(i, 1, L+1){ fori(j, 1, N+1) cin>>deckL[i].num[j]; }
        cin>>Cm>>Cl;
        cin>>A;
        if(deckM[Cm].num[A] > deckL[Cl].num[A]) cout<<"Marcos\n";
        else if(deckM[Cm].num[A] < deckL[Cl].num[A]) cout<<"Leonardo\n";
        else cout<<"Empate\n";
    }
    return 0;
}
