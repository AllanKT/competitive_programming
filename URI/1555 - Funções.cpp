#include<bits/stdc++.h>
using namespace std;

int r(int x, int y){
    return ((9*x*x) + (y*y));
}

int b(int x, int y){
    return ((2*x*x) + (25*y*y));
}

int c(int x, int y){
    return ((-100*x) + (y*y*y));
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int x=0, y=0;
        cin>>x>>y;

        if(b(x,y)>c(x,y) && b(x,y)>r(x,y)) cout<<"Beto ganhou\n";
        else if(r(x,y)>b(x,y) && r(x,y)>c(x,y)) cout<<"Rafael ganhou\n";
        else if(c(x,y)>r(x,y) && c(x,y)>b(x,y)) cout<<"Carlos ganhou\n";

    }
    return 0;
}
