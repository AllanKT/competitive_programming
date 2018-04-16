#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;

	while(scanf("%d", &n) && n!=0){
		map<long long, int> mapa;
		for(int i=0; i<n; i++){
			long long num;
			scanf("%lld", &num);
			mapa[num]++;
		}

		for(auto it= mapa.begin(); it!=mapa.end(); it++){
			if((it->second) % 2 !=0){
				printf("%lld\n", it->first);
				break;
			}
		}
	}
	return 0;
}
