#include<bits/stdc++.h>
#define max 1000000
using namespace std;

vector<int> graph[max];
int dist[max];

int inverte(int num){
    int invertido = 0;
    while(num!=0){
        invertido*=10;
        invertido+=(num%10);
        num/=10;
    }
    return invertido;
}

void bfs(int Start, int End){
    queue<int> q;
    dist[Start] = 0;
    q.push(Start);
    while(not q.empty() && dist[End]==-1){
        int v = q.front();
        q.pop();
        int w1 = v+1;
        int w2 = inverte(v);

        if(dist[w1] == -1){
            q.push(w1);
            dist[w1] = dist[v]+1;
        }
        if(dist[w2] == -1){
            q.push(w2);
            dist[w2] = dist[v]+1;
        }
    }
}

int main(){
    int t;
    cin>>t;



    while(t--){
        memset(dist, -1, sizeof(dist));

        int a, b;
        cin>>a>>b;

        bfs(a, b);

        cout<<dist[b]<<endl;
    }

    return 0;
}
