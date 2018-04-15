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
#define MAX 100005
#define oo 1<<30

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

ll num[MAX], tim[MAX], sum[MAX], aux_sum[MAX], k, n, ans, aux;

void prefix_sum(){
    fori(i, 1, k+1) sum[i] = sum[i-1] + num[i];
}

int main(){
    cin>>k>>n;
    fill(num, 0);
    fill(tim, 0);
    fill(sum, 0);
    fill(aux_sum, 0);
    fori(i, 1, k+1) cin>>num[i];
    fori(i, 1, k+1){
        cin>>tim[i];
        if(tim[i]) {
            ans += num[i];
            num[i] = 0;
        }
    }
    prefix_sum();
	for(int i = 1; i < k+1; i++){
		aux = max(sum[i] - (i - n >= 0 ? sum[i-n] : 0), aux);
	}
    cout<<aux + ans<<endl;
    return 0;
}