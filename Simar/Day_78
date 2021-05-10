#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int N,T,k=1;


void gogo()
{
    cin >> N;
	string arr;
	cin>>arr;
    vector<int>a(N,1);
   //for(int i=0;i<N;++i) cout<<arr[i]<<" ";
	cout << "Case #" << k++ << ": ";
    for (int i=1; i < N; i++) if(arr[i]>arr[i-1]) a[i] += a[i-1]; 
	for(int i=0;i<N;++i) cout<<a[i]<<" ";
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);

    int T; cin >> T;
    while(T--) gogo();
}
