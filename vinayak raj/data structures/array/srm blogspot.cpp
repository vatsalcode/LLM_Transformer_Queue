#include <bits/stdc++.h>
#include<math.h>
#include <limits>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int tt,num,k,x,y,i,t,fl;
    cin>>tt;
    for(int p=0;p<tt;p++)
    {
        cin>>num>>k;
        long long int q,f;
        t=0,fl=0;
        for(i=0;i<num;i++)
        {
            cin>>q;
            t+=q;
            if(t<k && fl==0)
            {
                f=i;
                fl=1;
            }
            if(fl==0)
            {
                t=t-k;
            }
        }
        if(fl==1)
            i=f;
        else
        {
            i=i+t/k;
        }
        cout<<i+1<<endl;
    }
    return 0;
}

