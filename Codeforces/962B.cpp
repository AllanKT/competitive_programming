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

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int n, a, b, ans = 0, flag = 0;
    string places;
    cin>>n>>a>>b;
    int na = a, nb = b;
    cin>>places;
    swap(&a, &b);
    for(int i=0; i<places.size(); i++){
        if(a<b){
            swap(&a, &b);
            flag = 2;
        }
        if(places[i]=='*'){
            flag = 3;
            continue;
        }else{
            if((flag!=1) && (a>0)){
                a--;
                ans++;
                flag = 1;
                continue;
            }else if((flag!=2) && (b>0)){
                b--;
                ans++;
                flag = 2;
                continue;
            }else flag=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}