#include<iostream>

using namespace std;



void printarray(int *arr,int &x)
{
    int i;
    for(i=0;i<x;i++)
        cout<<i[arr]<<" ";
}

int findOccurence(int *arr,int &x,int &s)
{
    int c=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==s)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,i;cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>i[arr];

    printarray(arr,n);

    int element;cin>>element;

    cout<<endl<<findOccurence(arr,n,element);

    return 0;


}
