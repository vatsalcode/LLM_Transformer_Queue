#include<iostream>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0)
            break;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        {
            b[(a[i]-1)]=i+1;
        }
    int f=0;
    for(int i=0;i<n;i++){
            if(a[i]==b[i])
            f++;
        }
		if(f==n)
        cout<<"ambiguous\n";
        else
        cout<<"not ambiguous\n";
    }
    return 0;
}
