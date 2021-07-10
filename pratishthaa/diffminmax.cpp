#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;
	cin>>k>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr + n); 
    int min_e,max_e;
    int result = arr[n - 1]- arr[0];
 
    for (int i = 1; i <= n - 1; i++) {
        if (arr[i] >= k && arr[n - 1] >= k) {
            max_e = max(arr[i - 1] + k,arr[n - 1] - k); 
        if(arr[i] - k < 0)
            continue;
        min_e = min(arr[0] + k, arr[i] - k);
        result = min(result, max_e - min_e);
        }
    }
        cout<<result;
}
