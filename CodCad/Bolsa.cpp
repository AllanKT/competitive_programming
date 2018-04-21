#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

struct bolsa{
    int t, d;
};

bool comp(bolsa a, bolsa b){
    return a.d<b.d;
}

int main(){
    int n, now = 0, cont = 0;
    bolsa b[MAX];
    cin>>n;
    for(int i=0; i<n; i++) cin>>b[i].t>>b[i].d;
    sort(b, b+n, comp);
    for(int i=0; i<n; i++){
        if(now + b[i].t > b[i].d) cont = max(cont, abs(now+b[i].t-b[i].d));
        now += b[i].t;
    }
    cout<<cont<<endl;
    return 0;
}
