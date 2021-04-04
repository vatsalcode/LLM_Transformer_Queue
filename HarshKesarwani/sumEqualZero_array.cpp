#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum=0;
    int count=0;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elememts" << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }
    for(int x=0;x<size;x++)
    {
        for(int y=x;y<size;y++)
        {
            sum=sum+arr[y];
            if(sum==0)
            {
                count++;
            }
        }
        sum=0;
    }
    cout<<count<<endl;
    return 0;
}
