#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int FIB[MAX];
int cont;

int fib(int n){
    cont++;
    if(n==0) FIB[n] = 0;
    else if(n==1) FIB[n] = 1;
    else FIB[n] = fib(n-1) + fib(n-2);
    return FIB[n];
}

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cont=-1;
        memset(FIB, 0, sizeof(FIB));
        cin>>n;
        int x = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, cont, x);
    }
    return 0;
}
