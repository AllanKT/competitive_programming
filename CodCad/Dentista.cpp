#include<bits/stdc++.h>
#define MAX 10005
using namespace std;

typedef struct horarios{
    int start, finish;
};

bool comp(horarios a, horarios b){
    return a.finish<b.finish;
}

int main(){
    int n, p=0;
    horarios pacientes[MAX], ans[MAX];
    cin>>n;
    for(int i=0; i<n; i++)  cin>>pacientes[i].start>>pacientes[i].finish;
    sort(pacientes, pacientes+n, comp);
    for(int i=0; i<n; i++){
        if(i==0 || ans[p-1].finish <= pacientes[i].start) ans[p++] = pacientes[i];
    }
    cout<<p<<endl;
    return 0;
}
