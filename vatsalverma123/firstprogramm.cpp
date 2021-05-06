#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool lol(int arr[], int n, int sum) {
	bool t[n + 1][sum + 1];
	int i, j;

	for (int i = 0; i < n; i++)
		for (int j = 0; i < n; j++) {
			if (i == 0)
				t[i][j] = false;
		}
	if (j == 0)
		t[i][j] = true;
}

if (arr[i - 1] <= j) {
	t[i][j] = t[i - 1][j] || t[i - 1][j - arr[i - 1]];
}
else
	t[i][j] = t[i - 1][j];

}
}
return t[n][sum];
}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		printf("Found a subset with given sum");
	else
		printf("No subset with given sum");
	return 0;
}
