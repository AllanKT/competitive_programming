#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1, v=1;
    while(true){
        cin>>n>>v;
       if(n==0 && v==0) break;
       int a=0;
       while(v){
           int j=v, i=v, c=0;
           v--;
           while(i--){
               c+=j;
               if(i==0){
                   j--;
                   i=j;
               }
               if(c==n) a=1;
           }
       }
       if(a!=1) cout<<"impossivel\n";
       else cout<<"possivel\n";
    }
    return 0;
}
