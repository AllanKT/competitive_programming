#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, qtd = 0, money[6] = {100,50,25,10,5,1};
    cin>>n;
    for(int i=0; i<6; i++){
        while(n>=money[i]){
            n-=money[i];
            qtd++;
        }
    }
    cout<<qtd<<endl;
    return 0;
}
