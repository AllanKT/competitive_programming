#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
#define MAX 300020

using namespace std;
using ii = pair<int, int>;
using ll = long long;
///////////////////////////////////////////////////////////////////////////////

ll ans[MAX], n, a, cont;
map<ll, int> num, last;

int main(){
    cin>>n;
    fori(i, 0, n){
        cin>>a;
        if(num[a] == 0){
            num[a]++;
            last[a] = i;
            ans[i] = a;
        }else{
            while(num[a]!=0){
                num[a]--;
                ans[last[a]] = -1;
                a*=2;
                ans[i] = a;
            }
            num[a]++;
            last[a] = i;
        }
    }
    fori(i, 0, n) if(ans[i]!=-1) cont++;
    cout<<cont<<endl;
    fori(i, 0, n) if(ans[i]!=-1) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}