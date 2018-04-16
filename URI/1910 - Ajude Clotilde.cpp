#include<bits/stdc++.h>
#define MAX 100000
#define oo (1<<30)
using namespace std;
using ii = pair<int, int>;

int channels[MAX+5], amount[MAX+5];

bool isValid(int idx,int c) {
    if(idx <= MAX && idx >= 1 && channels[idx] == 1 && c < amount[idx]) {
        ii newc;
        newc.first = idx;
        newc.second = c;
        amount[newc.first] = newc.second;
        return true;
    }
    return false;
}

int bfs(int source, int target){
    queue<ii> open;
    open.push(ii(source, 0));
    amount[source] = 0;
    while(!open.empty()){
        ii a = open.front(); open.pop();
        if(a.first == target) return a.second;
        if(isValid(a.first + 1,a.second + 1)) open.push(make_pair(a.first + 1,a.second + 1));
        if(isValid(a.first - 1,a.second + 1)) open.push(make_pair(a.first - 1,a.second + 1));
        if(isValid(a.first * 3,a.second + 1)) open.push(make_pair(a.first * 3,a.second + 1));
        if(isValid(a.first * 2,a.second + 1)) open.push(make_pair(a.first * 2,a.second + 1));
        if(a.first%2 == 0) if(isValid(a.first/2,a.second + 1)) open.push(make_pair(a.first/2,a.second + 1));
      }
      return -1;
}

int main(){
    int o, d, k, banned;
    while(cin >> o >> d >> k) {
        if(o == 0 && d == 0 && k == 0) break;
        for(int i=0; i<=MAX; i++) {
            channels[i] = 1;
            amount[i] = oo;
        }
        while(k--) {
            cin >> banned;
            channels[banned] = 0;
        }
        cout << bfs(o,d) << endl;
    }
    return 0;
}
