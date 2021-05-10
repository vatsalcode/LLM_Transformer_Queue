#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int m,x,y;
      cin>>m>>x>>y;
      
      bool arr[101]={0};
      int brr[m];
      
      for(int i=0;i<m;i++)
      {
        cin>>brr[i];
        arr[brr[i]]=1;
      }
      int span=x*y;
      
      for(int i=0;i<m;i++)
      {
        int j=brr[i]-1;
        while(j>0 && j>=(brr[i]-span))
        {
          arr[j]=1;
          j--;
        }
        
        j=brr[i]+1;
        while(j<101 && j<=(brr[i]+span))
        {
          arr[j]=1;
          j++;
        }
      }
      int ans=0;
      for(int i=1;i<101;i++)
      {
        if(arr[i]==0)
        {
          ans++;
        }
      }
      
      cout<<ans<<endl;
    }
    
    return 0;
}
