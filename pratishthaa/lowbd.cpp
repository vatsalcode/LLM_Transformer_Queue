#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	sort(vect.begin(), vect.end());

	auto q = lower_bound(vect.begin(), vect.end(), 20);

	auto p = upper_bound(vect.begin(), vect.end(), 20);

	cout << "The lower bound is at position: ";
	cout << q-vect.begin() << endl;

	cout << "The upper bound is at position: ";
	cout << p-vect.begin() << endl;

	return 0;
}
