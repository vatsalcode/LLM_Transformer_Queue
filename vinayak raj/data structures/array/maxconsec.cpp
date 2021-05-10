
#include<iostream>

using namespace std;

int sumn(int a[],int x)
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}

int countone(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(sumn(arr,n)==3)
        {
            c++;
            i++;
        }
    }
    return c;

}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<countone(arr,n);

}
