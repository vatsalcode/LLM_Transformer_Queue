#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int test;
	cin >> test;
	while (test--) {
		int m, n, s;
		cin >> m >> n;
		unordered_set<int>set;

		for (int i = 0; i < n + m; i++) {
			cin >> s;
			set.insert(s);
		}

		cout << (int)set.size() << endl;


	}


	return 0;
}
