#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fori(a, l, f) for(int a = l; a<f; ++a)
#define ford(a, l, f) for(int a=l; a>=f; --a)
#define pq priority_queue
#define checkBit(mask, i) ((mask & (1 << i)) != 0) ? true:false
#define setBit(mask, i) mask = mask | (1 << i)
#define debug(x) cout<<x<<endl
#define fill(x, y) memset(x, y, sizeof x)
#define MAX 200005
#define oo 1<<30

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

int main(){
    int n, sum[MAX], num[MAX];
    double total = 0.0;
    cin>>n;
    fill(num, 0);
    fill(sum, 0);
    fori(i, 1, n+1){
        cin>>num[i];
        total += num[i];
    }
    total/=2.0;
    fori(i, 1, n+1) sum[i] = sum[i-1] + num[i];
    fori(i, 1, n+1){
        if(sum[i] >= total){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}