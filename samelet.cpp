#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int size=s.length();
		int count=0;
		int max=0;
		for(int i=0;i<size;i++)
        {
            int count=0;
            for(int j=0;j<size;j++)
            {
                if(s[i]==s[j])
                    count++;
            }
            if(count>max)
                max=count;
        }
        if(size%2==0)
        {
            if(max==size/2)
                printf("YES\n");
                else printf("NO\n");
        }
        else printf("NO\n");
	}
	return 0;
}
