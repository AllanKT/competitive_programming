#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s;
	set <string> set1;
	scanf("%d", &n);

	while(n--) {
		int k;
		scanf("%d", &k);
		set1.clear();
		for(int i = 0; i < k; i++) {
			cin >> s;
			set1.insert(s);
		}

		if(set1.size() > 1) {
			printf("ingles\n");
		}
		else {
			auto it = set1.begin();
			cout << (*it) << endl;
		}
	}


	return 0;
}
