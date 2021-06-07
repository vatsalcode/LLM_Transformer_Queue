#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
bool isPrime[sz + 1];
void sieve()
{
	memset(isPrime, true, sizeof(isPrime));

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= sz; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j < sz; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int maxDiff(int L, int R)
{
	int a = 0;
	for (int i = L; i <= R; i++) {

		if (isPrime[i]) {
			a = i;
			break;
		}
	}
	int b = 0;
	for (int i = R; i >= L; i--) {

		if (isPrime[i]) {
			b = i;
			break;
		}
	}
	if (b == 0)
		return -1;
	int dif = b - a;
	int left = b + 1;
	int right = R;
	for (int i = left; i <= right; i++) {
		if (isPrime[i]) {
			if (i - b <= dif) {

				a = b;
				b = i;
				dif = b - a;
			}
		}
	}
	return dif;
}

int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int L, R;
		cin>>L>>R;
        cout << maxDiff(L, R)<<endl;
	}
	return 0;
}
