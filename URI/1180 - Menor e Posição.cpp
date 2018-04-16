#include<bits/stdc++.h>
#define MAX 1020
using namespace std;

int main(){
    int x, vet[MAX];
    cin>>x;
    for(int i=0; i<x; i++)
        cin>>vet[i];
    int index = 0, ans = vet[0];
    for(int i=0; i<x; i++){
        if(vet[i]<ans){
            ans = vet[i];
            index = i;
        }
    }
    cout<<"Menor valor: "<<ans<<endl<<"Posicao: "<<index<<endl;
    return 0;
}
