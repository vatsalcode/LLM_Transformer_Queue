    #include<utility>
    #include<iostream>
    #include<bits/stdc++.h>

    using namespace std;

    #define speed; ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    void bsort(int a[], char b[], int n)
    {

        pair <int ,char> pa[n];
        for(int i=0;i<n;i++)
        {
            pa[i].first=a[i];
            pa[i].second=b[i];

        }
            sort(pa,pa+n);
            for(int i=0;i<n;i++)
            {
                a[i]=pa[i].first;
                b[i]=pa[i].second;
            }
    }

    int main()
    {
        speed;
        int a[]={3,2,1};
        char b[]={'g','h','y'};
        int n=sizeof(a) / sizeof(a[0]);
        bsort(a,b,n);
        for(int i=0;i<n;i++)
        {
            cout<<i[a]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<i[b]<<" ";
        }

        return 0;
    }
