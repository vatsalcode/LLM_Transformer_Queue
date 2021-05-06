// To reverse a array
#include <iostream>
using namespace std;

int main() {
    int size;;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     int temp;
    for (int i=0; i<size/2; i++) {
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
    }
    
    for (int i=0; i<size; i++)   {
    cout<<arr[i]<<" ";
    }
    return 0;
}
