#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(true){
        cin>>n;
        if(n!=0){
            for(long long i=1; i*i<=n; i++){
                if (i > 1) cout << " ";
                cout<<i*i;
            }
            cout<<endl;
        }
        else break;
    }
    return 0;
}
