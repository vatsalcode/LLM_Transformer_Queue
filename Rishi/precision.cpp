//How to use precision in c++ with cout
#include<iostream>
#include <iomanip>
using namespace std;

int positive(int arr[],int size){
    int count=0;
    for (int i=0; i<size; i++) {
    if (arr[i]>0) {
    count++;
    }
    }
    return count;
}
int negative(int arr[],int size){
    int count=0;
    for (int i=0; i<size; i++) {
    if (arr[i]<0) {
    count++;
    }
    }
    return count;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0; i<size; i++) {
    cin>>arr[i];
    }
    int a=positive(arr,size),b=negative(arr,size),c=size-a-b;
    cout<<setprecision(6)<<(float)a/size<<endl;
     cout<<setprecision(6)<<(float)b/size<<endl;
     cout<<setprecision(6)<<(float)c/size<<endl;
    
}
