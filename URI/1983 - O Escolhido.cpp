#include<bits/stdc++.h>
using namespace std;

int main(){
    float mat=0, nota=0;
    int n;
    cin>>n;
    n--;
    cin>>mat>>nota;
    while(n--){
        float a, b;
        cin>>a>>b;
        if(b>nota){
            nota=b;
            mat=a;
        }
    }
    if(nota>=8.0)
        cout<<mat<<endl;
    else cout<<"Minimum note not reached"<<endl;
    return 0;
}
