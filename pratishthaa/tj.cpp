#include <bits/stdc++.h>
using namespace std;
bool Arrive(int a, int b,int c,int d, int n)
{
    int y=abs(a+b-c-d) ;
    
	if (n >= y  && (n - y) % 2 == 0 )
    {

		return true;
    }
    else if(n<y ||  (n-y)%2!=0) {

	return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
                int a,b,c,d,k;
            
                cin>>a>>b>>c>>d>>k;
            if (Arrive(a, b,c,d, k))
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
    }
	return 0;
}
