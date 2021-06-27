#include<bits/stdc++.h>
using namespace std;
void countFreq(string s[], int a)
{
    vector<bool> visited(a, false);
 
    for (int i = 0; i < a; i++) {
 
        if (visited[i] == true)
            continue;
 
        int ncount = 1;
        for (int j = i + 1; j < a; j++) {
            if (s[i] == s[j]) {
                visited[j] = true;
                ncount++;
            }
        }
        cout << ncount << endl;
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,b;
		cin>>n;
		string s[3*n];
		int x[3*n];
		for(int i=0;i<3*n;i++)
		{
			cin>>s[i];
			cin>>x[i];
		}
		int count = 0;
        for (int i = 0; i < 3*n; i++){
            while (i < 3*n - 1 && s[i] == s[i + 1]){
                i++;
            }
            count++;
        }
        if(count==3*n)
        {
        	for(int i=0;i<3*n;i++)
        	{
        		cout<<x[i]<<endl;
			}
		}
		else
		{
			int a = sizeof(s) / sizeof(s[0]);
            countFreq(s, a);
		}        
	}
	return 0;
}
