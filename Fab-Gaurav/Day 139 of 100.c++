//Program To merge 2 array into a third array.

#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int m,int b[], int n){
    int i=0,j=0,k=0;
    int c[n+m];

    while ((i<n) && (j <m)){
        if (a[i] < b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }

    while (i<n)
            c[k++]=a[i++];
    while (j<m)
            c[k++]=b[j++];

    cout<<"Merged Array is : ";
    for (i=0; i<k; i++)
        cout<<c[i]<<", ";

}

int main(){
    int m, n, arr1[m], arr2[n];
    
    cout << "Enter the size of Array 1 : ";
    cin >> m;
    cout << "Input the Array 1 elements : ";
    for(int i = 0; i<m;i++){
        cin >> arr1[i];
    }
    
    cout << "Enter the size of Array 2 : ";
    cin >> n;    
    cout << "Input the Array 2 elements : ";
    for(int i = 0;i<n;i++){
        cin >> arr2[i];
    }
    
    Merge(arr1, m, arr2, n);
    return 0;
}
