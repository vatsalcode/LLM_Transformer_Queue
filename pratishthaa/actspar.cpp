#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[1000][20],B[20];
    int n,i,Q,ans;
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%s",A[i]);
    scanf("%d",&Q);
    while(Q--)
    {
        ans=0;
        scanf("%s",B);
        for(i=0;i<n;i++)
        {
            if(strcmp(B,A[i])==0)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
