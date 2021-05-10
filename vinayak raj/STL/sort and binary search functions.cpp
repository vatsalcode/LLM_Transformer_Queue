#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7};
    sort(a,a+7);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }

    if(binary_search(a,a+7,3))
    {
        cout<<"present";
    }
    else
        cout<<"absent";

    return 0;
}
